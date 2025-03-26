#!/bin/bash

echo "PID = $$" >&2

echo "$1 (O/N)"

read reponse 

if [[ "$reponse" == "O" || "$reponse" == "o" ]]; then
    exit 0
else 
    exit 1
fi