#include <stdio.h>
#include <stdlib.h>

void plusplus(int* a);
void swap(int* x, int* y);

int main(int argc, char** argv) {

    int a = 3;
    int c = 4;
    int* b = &c;
    *b = -99;
    b = &a;
    *b = 1000;

    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("b = %p\n", b);
    printf("c = %d\n", c);

    int d = 1000;
    plusplus(&d);
    printf("d = %d\n", d);

    int x = 50;
    int y = 100;
    swap(&x, &y);
    printf("x=%d y=%d\n", x, y);


    return (EXIT_SUCCESS);
}

void plusplus(int* a) {
    //(*a)++;
    *a = *a + 1;
}

void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


