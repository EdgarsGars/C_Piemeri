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



#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "utilites.h"

/*
 * 
 */
int main(int argc, char** argv) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    int N;
    //srand(time(NULL));
    sscanf(argv[2], "%d", &N);
    mkdir("./merijumi", 0777);

    //generateData("./merijumi/diena1.csv", N);
    Merijums* merijumi = ielasitMerijumus(argv[1], N);
    //int maks = max(merijumi, N);
    printf("AVG : %f\n", avg(merijumi, N));
    printf("MAX : %f\n", max(merijumi, N));
    printf("MIN : %f\n", min(merijumi, N));

    Merijums* results;
    int garums;
    printf("[4 -> 10]\n");
    between(merijumi, N, 3, 11, &results, &garums);
    printResults(results, garums);
    //    printf("[ == 88 ]\n");
    //    findEqualTo(merijumi, N, 88, &results, &garums);
    //    printResults(results, garums);
    //    printf("[ < 20 ]\n");
    //    lessThan(merijumi, N, 20, &results, &garums);
    //    printResults(results, garums);
    //
    //
    //    //--------
    //    between(merijumi, N, 30, 100, &results, &garums);
    //    between(results, garums, 50, 70, &results, &garums);
    //    greaterThan(results, garums, 55, &results, &garums);
    //    printf("-----\n");
    //    printResults(results, garums);
    //
    //
    //    //getchar();
    return (EXIT_SUCCESS);
}

