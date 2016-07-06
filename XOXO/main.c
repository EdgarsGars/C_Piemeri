/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Edgar
 *
 * Created on 30 июня 2016 г., 19:07
 */

#include <stdio.h>
#include <stdlib.h>


#define WON 3
#define LOST 2
#define TIE 1
#define CONTINUE 0

void lietotajaGajiens(char laukums[][3]);
void datoraGajiens(char laukums[][3]);
int parbaudit(char laukums[][3]);
void printLaukums(char laukums[][3]);

int main(int argc, char** argv) {
    srand(time(NULL));
    char laukums[3][3];
    int soli = 0;
    for (int r = 0; r < 3; r++) {
        for (int k = 0; k < 3; k++) {
            laukums[r][k] = ' ';
        }
    }


    while (1) {
        printLaukums(laukums);

        lietotajaGajiens(laukums);
        soli++;
        if (parbaudit(laukums) != CONTINUE || soli == 9) {
            break;
        }

        datoraGajiens(laukums);
        soli++;
        if (parbaudit(laukums) != CONTINUE || soli == 9) {
            break;
        }
        printf("\n\n");
    }

    printLaukums(laukums);


    switch (parbaudit(laukums)) {
        case WON:
            printf("Speletajs uzvareja!\n");
            break;
        case LOST:
            printf("Dators uzvareja!\n");
            break;
        default:
            printf("Neizskirts!\n");
            break;
    }


    return (EXIT_SUCCESS);
}

void lietotajaGajiens(char laukums[][3]) {
    int pozicija;
    printf("Ievadiet poziciju => ");
    scanf("%d", &pozicija);

    switch (pozicija) {
        case 7:
            if (laukums[0][0] == ' ') {
                laukums[0][0] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 8:
            if (laukums[0][1] == ' ') {
                laukums[0][1] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 9:
            if (laukums[0][2] == ' ') {
                laukums[0][2] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 4:
            if (laukums[1][0] == ' ') {
                laukums[1][0] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 5:
            if (laukums[1][1] == ' ') {
                laukums[1][1] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 6:
            if (laukums[1][2] == ' ') {
                laukums[1][2] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 1:
            if (laukums[2][0] == ' ') {
                laukums[2][0] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 2:
            if (laukums[2][1] == ' ') {
                laukums[2][1] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        case 3:
            if (laukums[2][2] == ' ') {
                laukums[2][2] = 'X';
            } else {
                lietotajaGajiens(laukums);
            }
            break;
        default:
            lietotajaGajiens(laukums);
    }

}

void datoraGajiens(char laukums[][3]) {
    int r;
    int k;
    do {
        r = rand() % 3;
        k = rand() % 3;
    } while (laukums[r][k] != ' ');
    laukums[r][k] = 'O';
}

int parbaudit(char laukums[][3]) {
    char simboli[2] = {'X', 'O'};
    for (int i = 0; i < 2; i++) {
        char gajiens = simboli[i];

        //Veiksim parbaudes
        //            if (gajiens == 'X') {
        //                return WON;
        //            } else {
        //                return LOST;
        //            }
        //
        for (int n = 0; n < 3; n++) {
            //Parbudam rindas
            if (laukums[n][0] == gajiens && laukums[n][1] == gajiens && laukums[n][2] == gajiens) {
                return (gajiens == 'X') ? WON : LOST;
            }
            //Parbaudam kolonas
            if (laukums[0][n] == gajiens && laukums[1][n] == gajiens && laukums[2][n] == gajiens) {
                return (gajiens == 'X') ? WON : LOST;
            }
        }

        //Diogonale #1
        if (laukums[0][0] == gajiens && laukums[1][1] == gajiens && laukums[2][2] == gajiens) {
            return (gajiens == 'X') ? WON : LOST;
        }
        //Diogonale #2
        if (laukums[0][2] == gajiens && laukums[1][1] == gajiens && laukums[2][0] == gajiens) {
            return (gajiens == 'X') ? WON : LOST;
        }


    }
    //Default continue
    return CONTINUE;

}

void printLaukums(char laukums[][3]) {
    printf("-+-+-\n");
    for (int r = 0; r < 3; r++) {
        printf("%c|%c|%c\n", laukums[r][0], laukums[r][1], laukums[r][2]);
        printf("-+-+-\n");
    }
}