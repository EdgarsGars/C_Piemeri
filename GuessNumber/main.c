/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on May 25, 2016, 6:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(NULL));
    //rand, scanf, srand
    int sp;
    int turpinatSpeli = 1;
    while (turpinatSpeli == 1) {
        int skaitlis = rand() % 100 + 1;
        int vaiAtminejis = 0;
        int minejumuSkaits = 0;
        //printf("Dators izvelejas %d\n", skaitlis);
        do {
            printf("Ievadi skaitli no (1-100) : ");
            scanf("%d", &sp);
            minejumuSkaits++;
            //printf("Speletajs ievadija : %d\n", sp);
            if (sp > 0 && sp <= 100) {
                if (sp == skaitlis) {
                    printf("Apsveicam jus atminejat!\n");
                    printf("Meginajumu skaits = %d\n", minejumuSkaits);
                    
                    vaiAtminejis = 1;
                } else if (sp < skaitlis) {
                    printf("Par maz\n");
                } else {
                    printf("Par lielu\n");
                }
            } else {
                printf("Jaievada skaitlis no 1-100\n");
            }
        } while (vaiAtminejis == 0);
        printf("Velreiz? ja = 1, ne = 0?\n");
        scanf("%d",&turpinatSpeli);
    }

    return (EXIT_SUCCESS);
}

