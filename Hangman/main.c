/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on June 2, 2016, 7:13 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int maxkludas = 9;
    char vards[] = "world";
    char minejums[] = "*o***";
    int N = strlen(vards);
    int nepareizieMinejumi = 0;
    char burts;
    printf("%d", strcmp("abc", "abc"));

    do {
        printf("%s\n", minejums);
        printf("Ievadi burtu => ");
        scanf("\r%c", &burts);
        int vaiburtsir = 0;
        for (int i = 0; i < N; i++) {
            if (vards[i] == burts) {
                minejums[i] = burts;
                vaiburtsir = 1;
            }
        }

        if (!vaiburtsir) {
            nepareizieMinejumi++;
        }

    } while (nepareizieMinejumi != maxkludas && strcmp(vards, minejums) != 0);

    return (EXIT_SUCCESS);
}

