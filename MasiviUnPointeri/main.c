/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on June 8, 2016, 6:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

void sort(int* a, int N, char* order);

int main(int argc, char** argv) {

    //    int a[] = {9, 3, 4};
    //    int* b = a;
    //
    //
    //    printf("a%p\n", a);
    //    printf("a[0]=\t%d\n", a[0]);
    //    printf("a[1]=\t%d\n", a[1]);
    //    printf("a[2]=\t%d\n", a[2]);
    //
    //    printf("*a\t=%d\n", *a);
    //    printf("*(a+1)\t=%d\n", *(a + 1));
    //    printf("*(a+2)\t=%d\n", *(a + 2));

    int x[] = {2, 3, 4, 5, 7, 10, -6};
    int n = sizeof (x) / sizeof (int);
    char* order = "augosa";
    sort(x, n, order);
    for (int i = 0; i < n; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }
 
    
    
    
    return (EXIT_SUCCESS);
}

void sort(int* a, int N, char* order) {
    int vaiSakartots = 0;
    while (!vaiSakartots) {
        vaiSakartots = 1;
        for (int i = 0; i < N - 1; i++) {
            if (order == "augosa") {
                if (a[i] > a[i + 1]) {
                    int tmp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = tmp;
                    vaiSakartots = 0;
                }
            } else {
                if (a[i] < a[i + 1]) {
                    int tmp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = tmp;
                    vaiSakartots = 0;
                }
            }
        }
    }


}

