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

int main(int argc, char** argv) {

    char laukums[3][3];

    for (int r = 0; r < 3; r++) {
        for (int k = 0; k < 3; k++) {
            laukums[r][k] = ' ';
        }
    }


    while (1) {
        printf("-+-+-\n");
        for (int r = 0; r < 3; r++) {
            printf("%c|%c|%c\n", laukums[r][0], laukums[r][1], laukums[r][2]);
            printf("-+-+-\n");
        }

        lietotajaGajiens(laukums);
        if (parbaudit(laukums) != CONTINUE) {
            break;
        }

        datoraGajiens(laukums);
        if (parbaudit(laukums) != CONTINUE) {
            break;
        }
        printf("\n\n");
    }


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
        if (laukums[0][0] == gajiens && laukums[0][1] == gajiens && laukums[0][2] == gajiens) {
            return (gajiens == 'X') ? WON : LOST;
            //            if (gajiens == 'X') {
            //                return WON;
            //            } else {
            //                return LOST;
            //            }
        }

    }
    //Default continue
    return CONTINUE;



}