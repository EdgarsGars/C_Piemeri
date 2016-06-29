/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on May 26, 2016, 6:13 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
double add(double sk1, double sk2);
double subtract(double sk1, double sk2);
double multiply(double sk1, double sk2);
double divide(double sk1, double sk2);

double manssqrt(double sk1);
double power(double sk1, int N);

int main(int argc, char** argv) {
    double a = 5.3, b = 6.5;
    printf("%f + %f = %f\n", a, b, add(a, b));
    printf("%f - %f = %f\n", a, b, subtract(a, b));
    printf("%f * %f = %f\n", a, b, multiply(a, b));
    printf("%f / %f = %f\n", a, b, divide(a, b));
    printf("%f / %f = %f\n", a, 0.0, divide(a, 0));
    printf("%f^%f = %f\n", 3.0, 2.0, power(3, 2));
    printf("%f^%f = %f\n", 3.0, 1.0, power(3, 1));
    printf("%f^%f = %f\n", 3.0, 0.0, power(3, 0));
    return (EXIT_SUCCESS);
}

double add(double sk1, double sk2) {
    double sum = sk1 + sk2;
    return sum;
}

double subtract(double sk1, double sk2) {
    return sk1 - sk2;
}

double multiply(double sk1, double sk2) {
    return sk1 * sk2;
}

double divide(double sk1, double sk2) {
    if (sk2 != 0) {
        return sk1 / sk2;
    } else {
        printf("Ar nulli dalit nedrikst\n");
        return 0;
    }
}

double power(double sk1, int N) {
    if (N == 0) {
        return 1;
    } else {
        double rezultats = sk1;
        for (int i = 0; i < N - 1; i++) {
            rezultats = rezultats * sk1;
        }
        return rezultats;
    }
}

double manssqrt(double sk1) {
    if (sk1 >= 0) {
        return sqrt(sk1);
    } else {
        printf("Skaitlim jabut nenegativam\n");
        return -1;
    }
}

