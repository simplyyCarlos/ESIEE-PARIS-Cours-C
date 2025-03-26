#!/bin/bash

./question1.2.sh

return_value=$?

if [ "$return_value" -eq 0 ]; then
    echo "Je savais que vous répondriez oui"
elif [ "$return_value" -eq 1 ]; then
    echo "Je savais que vous répondriez non"
else 
    echo "Vous êtes lent !"
fi
