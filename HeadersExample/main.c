/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Edgar
 *
 * Created on 6 июля 2016 г., 18:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "manasfunkcijas.h"

int main(int argc, char** argv) {
    int a[] = {2, 3, 4, 5, 6, 7, 8};
    int s = sum(a, 7);
    printf("Summa ir %d\n", s);
    
    return (EXIT_SUCCESS);
}

