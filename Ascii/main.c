/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on May 25, 2016, 6:33 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int throwDice();
void printChar(char c, int n);

int main(int argc, char** argv) {
    
    srand(time(NULL));
    // 2 3 
    int results[13] = {0};
    
    for (int i = 0; i < 250; i++) {
        results[throwDice() + throwDice()]++;
    }


    for (int i = 2; i < 13; i++) {
        printf("%d: %d\t", i, results[i]);
        printChar('*', results[i]);
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

int throwDice() {
    return rand() % 6 + 1;
}

void printChar(char c, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
}

int sort(int arr[]){
    int a[5];
    return a;
}