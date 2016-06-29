/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on May 26, 2016, 7:03 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int mestKaulinu();
void izvaditSimbolu(char simbols, int skaits);

int main(int argc, char** argv) {
    srand(time(NULL));
    int rezultati[11] = {0};
    int N = 300;
    for (int i = 0; i < N; i++) {
        int k1 = mestKaulinu();
        int k2 = mestKaulinu();
        int summa = k1 + k2;
        rezultati[summa - 2]++;
        printf("%d + %d = %d\n", k1, k2, summa);
    }

    for (int i = 0; i < 11; i++) {
        printf("%d\t%.2f\t", i + 2, (double) (rezultati[i] / (double) N * 100.0));
        izvaditSimbolu('*', rezultati[i]);
        printf("\n");
    }



    return (EXIT_SUCCESS);
}

int mestKaulinu() {
    int vertiba = rand() % 6 + 1;
    return vertiba;
}

void izvaditSimbolu(char simbols, int skaits) {
    for (int i = 0; i < skaits; i++) {
        printf("%c", simbols);
    }
}
