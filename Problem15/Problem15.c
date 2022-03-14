//
// Created by tvand on 15/03/2022.
//

#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main(int argc, char *argv[]) {
    int size;
    sscanf(argv[1], "%i", &size);

    int answer = factorial((size * size)) / 4;

    printf("%i\n", answer);

    return 0;
}