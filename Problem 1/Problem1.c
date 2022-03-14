//
// Created by Tom van Dinther on 14/03/22.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int limit;
    sscanf(argv[0], "%i", &limit);
    int sum = 0;

    printf(limit);

    for (int i = 3; i < limit; i+=3) {
        sum += i;
    }

    for (int i = 5; i < limit; i+=5) {
        sum += i;
    }

    printf(sum);
    
    return 0;
}