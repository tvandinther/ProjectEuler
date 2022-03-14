//
// Created by Tom van Dinther on 14/03/22.
//
#include <stdio.h>
#include <stdlib.h>

int sumMultiplesOf(int factor, int limit) {
    int sum = 0;
    for (int i = factor; i < limit; i += factor) {
        sum += i;
    }
    return sum;
}

int main(int argc, char *argv[]){

    int limit;
    sscanf(argv[1], "%i", &limit);

    int sum = 0;
    sum += sumMultiplesOf(3, limit);
    sum += sumMultiplesOf(5, limit);

    printf("%i", sum);
    
    return 0;
}
