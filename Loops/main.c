/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on May 25, 2016, 5:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    //for
    //masivi
    // if-else if - else
    int vecums = 20;
    int atdzimes[10];
    int at[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    at[3] = 11;
    at[4] = at[3] + at[5];
    printf("Last element %d\n", at[12]);
    for (int i = 0; i < 10; i++) {
        printf("Elements %d = %d\n", i, at[i]);
    }
    printf("\n");
    for (int i = 9; i >= 0; i--) {
        printf("Elements %d = %d\n", i, at[i]);
    }

    int a = 5;
    while (a > 0) {
        printf("a=%d\n", a);
        a--;
    }

    // for sum(0-10)
    int summa = 0;
    for (int i = 0; i <= 10; i++) {
        summa = summa + i;
    }

    printf("Summa %d\n", summa);
    // while
    summa = 0;
    int i = 0;
    while (i <= 10) {
        summa = summa + i;
        i++;
    }
    printf("Summa %d\n", summa);

    a = 5;
    while (a > 5) {
        a -= 100000;
        printf("%d\n", a);
    }

    a = 0;
    do {
        printf("a=%d\n", a);
        a--;
    } while (a > 0);

    a = 0;
    while (a > 0) {
        printf("a=%d\n", a);
        a--;
    }
    int a[5] = {0, -3, 2, 4, 999};

    //for
    for (int i = 0; i < 5; i++) {
        printf("a=%d\n", a[i]);
    }
    //while
    i = 0;
    while (i < 5) {
        printf("a=%d\n", a[i]);
        i++;
    }
    //do.. while
    i = 0;
    do {
        printf("a=%d\n", a[i]);
        i++;
    } while (i < 5);


    return (EXIT_SUCCESS);
}

