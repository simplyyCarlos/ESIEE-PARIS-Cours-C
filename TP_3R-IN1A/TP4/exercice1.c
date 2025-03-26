#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


void secondToTime(int s){
    int hours = s / 3600;            
    int minutes = (s % 3600) / 60;  
    int seconds = s % 60; 

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

}

int main (int argc, char** argv) {

    if(argc != 2){
        printf("Vous n'avez pas entré le bon nombre d'argument : 1 argument attendu.\n");
        return;
    }
      
    secondToTime(atoi(argv[1]));
    return 0;
}-