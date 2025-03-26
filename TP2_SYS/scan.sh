#!/bin/bash

testPing() {
    local ip=$1
    local detail=$2
    if ping -c 1 -W 1 "$ip" &> /dev/null; then
        echo "La machine $ip a répondu au ping"
    elif [ "$detail" == "true" ]; then
        echo "La machine $ip n'a pas répondu au ping"
    fi
}

main() {
    trap "echo 'Interruption du programme...'; exit 1" SIGINT

    local detail="false"
    local output_file=""
    local output_redirect="false"

    while getopts "po:" opt; do
        case $opt in 
            p) 
                detail="true"
                ;;
            o) 
                output_file="$OPTARG"
                output_redirect="true"
                ;;
            *) 
                echo "Usage : $0 [-p] [-o fichier] adresse/nn (ex: 192.168.1.0/24)"
                exit 1
                ;;
        esac
    done

    shift $(( OPTIND -1 ))

    if [[ -z "$1" ]]; then
        echo "Erreur : Vous devez fournir un réseau au format X.X.X.X/nn"
        exit 1
    fi

    IFS='/' read -r network cidr <<< "$1"

    if [[ ! "$cidr" =~ ^(16|24|32)$ ]]; then
        echo "Erreur : CIDR $cidr non valide. Utilisez /16, /24 ou /32."
        exit 1
    fi

    IFS='.' read -r -a octets <<< "$network"

    if [[ ${#octets[@]} -ne 4 ]]; then
        echo "Erreur : Adresse IP non valide"
        exit 1
    fi

    local ip_base=$(( (${octets[0]} << 24) + (${octets[1]} << 16) + (${octets[2]} << 8) + ${octets[3]} ))

    local max_ips=1
    case "$cidr" in
        16) max_ips=65536 ;;
        24) max_ips=256 ;;
        32) max_ips=1 ;;
    esac

    if $output_redirect; then
        exec > "$output_file"
    fi

    for ((i = 1; i < max_ips - 1; i++)); do
        local ip_num=$(( ip_base + i ))
        local ip="$(( (ip_num >> 24) & 255 )).$(( (ip_num >> 16) & 255 )).$(( (ip_num >> 8) & 255 )).$(( ip_num & 255 ))"

        testPing "$ip" "$detail" &
    done

    wait
}

main "$@"
