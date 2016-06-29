/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Edgar_000
 *
 * Created on May 18, 2016, 6:35 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a = 5, b = 5;
    printf("%d == %d ? %d\n", a, b, a == b);
    printf("%d != %d ? %d\n", a, b, a != b);
    printf("%d < %d ? %d\n", a, b, a < b);
    printf("%d > %d ? %d\n", a, b, a > b);
    printf("%d <= %d ? %d\n", a, b, a <= b);
    printf("%d >= %d ? %d\n", a, b, a >= b);

    int atzime = 99999;
    if (a > 0) {
        if (a <= 10) {

        }
    }

    double x = 1.5;
    // [0 1]
    if (x >= 0 && x <= 1) {
        printf("X ir intervala [0 1]\n");
    } else {
        printf("X nav intervala [0 1]\n");
    }

    double y = 1.5;
    // [0 1]U[2 3]
    if ((y >= 0 && y <= 1) || (y >= 2 && y <= 3)) {

        printf("Y ir intervala [0 1]U[2 3]\n");
    } else {
        printf("Y nav intervala [0 1]U[2 3]\n");
    }


    printf(" %d && %d = %d\n", 1, 1, 1 && 1);
    printf(" %d && %d = %d\n", 1, 0, 1 && 0);
    printf(" %d && %d = %d\n", 0, 1, 0 && 1);

    printf(" %d || %d = %d\n", 1, 1, 1 || 1);
    printf(" %d || %d = %d\n", 1, 0, 1 || 0);
    printf(" %d || %d = %d\n", 0, 1, 0 || 1);

    printf(" %d != %d\n", 1, !1);
    printf(" %d != %d\n", 0, !0);

    int serialsIet = 1;
    // serialsIet = 0;
    if (!serialsIet) {
        //reklama
    }

    int vecums = 15;
    printf("Ievadiet savu vecumu == > ");
    // scanf("%d", &vecums);
    printf("Lietotajs ievadija => %d\n", vecums);

    if (vecums >= 18) {
        printf("Se tev alus\n");
    } else {
        printf("Piedod nedosu\n");
    }

    int r = rand();
    int k = rand() % 10;
    srand(time(NULL));

    int t = rand() % 2;

    printf("r = %d\n", r);
    printf("k = %d\n", k);
    printf("t = %d\n", t);






    return (EXIT_SUCCESS);
}

