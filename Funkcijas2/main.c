/* 
 * File:   main.c
 * Author: edgars.garsneks
 *
 * Created on June 1, 2016, 5:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

/*Atrast max*/
/* <atgriezamais tips>(int,double... void) nosaukums(vertibas)*/
int maxVertiba(int mas[], int n);
int minVertiba(int mas[], int n);
int count(int mas[], int n, int elements);

int vaiBurts(char c);
int vaiParaSkaitlis(int a);
int vaiNeparaSkaitlis(int a);

int fact(int n);
int factr(int n);

void printCountDown(int n);

int main(int argc, char** argv) {
    int mas[6] = {1, 2, 3, -33, 22, 88};
    int mas2[8] = {3, 2, 3, 4, 4, 2, 2, 99};

    int max = maxVertiba(mas, 6);
    int max2 = maxVertiba(mas2, 7);

    int sk1 = count(mas2, 8, 2);

    printf("Max vertiba = %d\n", max);
    printf("Max2 vertiba = %d\n", max2);
    printf("Sk 2 bija %d reizes\n", sk1);

    char simbols = 'z';
    printf("Vai %c ir burts? %d\n", simbols, vaiBurts(simbols));

    int sk = 132;
    printf("Vai %d ir para skaitlis? %d\n", sk, vaiParaSkaitlis(sk));


    int n = 5;
    printf("%d! =  %d\n", n, fact(n));


    printCountDown(1000);
    int e = 0;
    scanf("%d", &e);
    printf("%d! = %d\n", e, factr(e));


    return (EXIT_SUCCESS);
}

int maxVertiba(int mas[], int n) {
    int max = mas[0];
    for (int i = 0; i < n; i++) {
        if (mas[i] > max) {
            max = mas[i];
        }
    }
    return max;
}

int minVertiba(int mas[], int n) {
    int min = mas[0];
    for (int i = 0; i < n; i++) {
        if (mas[i] < min) {
            min = mas[i];
        }
    }
    return min;
}

int count(int mas[], int n, int elements) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] == elements) {
            k++;
        }
    }
    return k;
}

int vaiBurts(char c) {
    //v1.
    //    if (c >= 65 && c <= 90) {
    //        return 1;
    //    } else if (c >= 97 && c <= 122) {
    //        return 1;
    //    } else {
    //            return 0;
    //        }
    //    v2.
    //        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
    //            return 1;
    //        } else {
    //            return 0;
    //        }
    //    v3.
    return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}
//1 100 432 

int vaiParaSkaitlis(int a) {
    //    double x1 = a / 2.0;
    //    int x2 = a / 2;
    //return (a / 2.0) == (a / 2);
    return a % 2 == 0;

}

int fact(int n) {
    int rez = 1;
    for (int i = 1; i <= n; i++) {
        rez *= i;
        // rez = rez * i;
    }
    return rez;
}

int vaiNeparaSkaitlis(int a) {
    return !vaiParaSkaitlis(a);
}

void printCountDown(int n) {
    printf("%d\n", n);
    if (n == 0) {
        return;
    } else {
        printCountDown(n - 1);
    }
}

int factr(int n) {
    if (n == 1) return 1;
    else return n * factr(n - 1);

}