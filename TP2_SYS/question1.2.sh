#!/bin/bash
echo `date`
echo "PID = $$" >&2
echo "$1 (O/N)"

(
    sleep 5
    kill $$ 2>/dev/null
) &

watched_pid=$!

read -t 5 reponse 

if ps -p $watched_pid > /dev/null 2>&1; then
    kill $watched_pid 2>/dev/null
fi

if [[ "$reponse" == "O" || "$reponse" == "o" ]]; then
    exit 0
else    
    exit 1
fi
