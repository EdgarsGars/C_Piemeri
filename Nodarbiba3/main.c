/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Edgar_000
 *
 * Created on May 19, 2016, 5:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a = 6;
    int b = 7;
    if (a < 3 && b > 2) { //nosacijums == 1
        printf("A\n");
    } else if (a > 5 || b > 5) {
        printf("B\n");
    }

    if (b == 3) {
        printf("D\n");
    } else if (a != b) {
        printf("C\n");
    } else {
        printf("E\n");
    }
    //
    int sk1 = 3, sk2 = 7, sk3 = 5;

    if (sk1 > sk2 && sk1 > sk3) {
        printf("Lielakais ir 1\n");
    } else if (sk2 > sk1 && sk2 > sk3) {
        printf("Lielakais ir 2\n");
    } else {
        printf("Lielakais ir 3\n");
    }

    // [ 3 5 4 2 5 7 8 9]
    int atzime[8] = {4, 5, 4, 2, 5, 7, 8, 9};
    //atzimes[1] = 3;
    // atzimes[2] = 5;
    printf("0. %d\n", atzime[0]);
    printf("1. %d\n", atzime[1]);
    printf("2. %d\n", atzime[2]);
    printf("3. %d\n", atzime[3]);
    printf("4. %d\n", atzime[4]);
    printf("5. %d\n", atzime[5]);
    printf("6. %d\n", atzime[6]);
    printf("7. %d\n", atzime[7]);
    //printf("%d", atzimes);
    double vid = (atzime[0] + atzime[1] + atzime[2] + atzime[3] + atzime[4] + atzime[5] + atzime[6] + atzime[7]) / 8.0;
    printf("Vid %f\n", vid);

    int summa = 0;
    for (int i = 0; i < 8; i++) {
        summa += atzime[i];
        //printf("%d=%d\n", i, atzime[i]);
    }
    vid = summa / 8.0;
    printf("Vid %f\n", vid);

    //[0 1 2 3 ... 100]
    int masivs2[101];

    for (int i = 0; i < 101; i++) {
        masivs2[i] = i;
        printf("i=%d -> %d\n", i, masivs2[i]);
    }

    for (int i = 100; i >= 0; i--) {
        masivs2[i] = i;
        printf("i=%d -> %d\n", i, masivs2[i]);
    }
    int paraSkailti[20]; // [ 0 2 4 6 8 ...]
    for (int i = 0; i <= 20; i++) {
        paraSkailti[i] = i * 2;
    }

    for (int i = 0; i < 20; i++) {
        printf("i=%d - > %d\n", i, paraSkailti[i]);
    }


    int sk[10] = {9, 10, 8, 7, 8, 10, 9, 8, 4, 3};
    int mazakaisIndex = 0;
    int min, x;
    for (int i = 0; i < 10; i++) {
        min = sk[mazakaisIndex];
        x = sk[i];
        if (x < min) {
            mazakaisIndex = i;
        }
    }
    printf("Min i=%d -> %d\n", mazakaisIndex, sk[mazakaisIndex]);










    return (EXIT_SUCCESS);
}

