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
    int N = 24;
    generateData("./merijumi/diena1.csv", N);
    Merijums* merijumi = ielasitMerijumus("./merijumi/diena1.csv", N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += merijumi[i].t;
        printf("Merijums %d = %d\n", merijumi[i].n, merijumi[i].t);
    }
    printf("Vid %f", sum / (double) N);

    return (EXIT_SUCCESS);
}

