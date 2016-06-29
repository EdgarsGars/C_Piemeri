/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on May 26, 2016, 5:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//Definejam funkciju
double videjaAtzime(int atzimes[], int N);

int main(int argc, char** argv) {
    int atzimes[10] = {1, 3, 6, 7, 8, 10, 7, 8, 9, 4};
    int atzimes2[5] = {1, 3, 6, 7, 8};
    int atzimes3[3] = {1, 3, 6};

    double vid1 = videjaAtzime(atzimes, 10);
    double vid2 = videjaAtzime(atzimes2, 5);
    double vid3 = videjaAtzime(atzimes3, 3);

    printf("Vid1 = %f\n", vid1);
    printf("Vid2 = %f\n", vid2);
    printf("Vid3 = %f\n", vid3);
    return (EXIT_SUCCESS);
}

//Implementejam
//<rezultats ko atgriezis> <funckijas nosaukums> (<tips1> a,<tips2> b......);

double videjaAtzime(int atzimes[], int N) {
    double summa = 0;
    for (int i = 0; i < N; i++) {
        summa = summa + atzimes[i];
    }
    double vid = summa / N;
    return vid;
}


