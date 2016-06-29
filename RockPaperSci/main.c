/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Edgar_000
 *
 * Created on May 18, 2016, 7:32 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(NULL));
    int rock = 0, paper = 1, scissors = 2;
    int speletajs = 0, dators = 0;
    int vaiTurpinat = 1;
    while (vaiTurpinat) {
        printf("Choose (0-Rock,1- Paper,2 - Scissors) : ");
        scanf("%d", &speletajs);
        printf("Player %d , PC %d\n", speletajs, dators);
        if (speletajs >= 0 && speletajs <= 2) {
            dators = rand() % 3;
            if (speletajs == rock && dators == scissors) {
                printf("Player won!\n");
            } else if (speletajs == paper && dators == rock) { // papirs akmens
                printf("Player won!\n");
            } else if (speletajs == scissors && dators == paper) { // skeres papirs
                printf("Player won!\n");
            } else if (speletajs == dators) { // neizkirts
                printf("Tie!\n");
            } else { //zaudeja
                printf("You lost!!\n");
            }


        } else {
            printf("Cmon 0 1 or 2...\n");
        }
        printf("Again? 1 - yes , 0 - no ");
        scanf("%d",&vaiTurpinat);
    }



    return (EXIT_SUCCESS);
}

