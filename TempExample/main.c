/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Edgar
 *
 * Created on 7 июля 2016 г., 19:11
 */

#include <stdio.h>
#include <stdlib.h>
#include "utilites.h"

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(NULL));
    int N = 24;
    generateData("./merijumi/diena1.csv", N);
    Merijums* merijumi = ielasitMerijumus("./merijumi/diena1.csv", N);
    //int maks = max(merijumi, N);
    printf("AVG : %f\n", avg(merijumi, N));
    printf("MAX : %f\n", max(merijumi, N));
    printf("MIN : %f\n", min(merijumi, N));

    Merijums* dienasKurasMax;
    int garums;
    findEqualTo(merijumi, N, max(merijumi, N), &dienasKurasMax, &garums);
    printf("Found : %d\n", garums);
    for (int i = 0; i < garums; i++) {
        printf("Merijums %d = %d\n", dienasKurasMax[i].n, dienasKurasMax[i].t);
    }

    return (EXIT_SUCCESS);
}

