#ifndef UTILITES_H
#define UTILITES_H

#include <stdio.h>
#include <time.h>

typedef struct {
    int n, t;
} Merijums;

void generateData(char* filename, int n);
Merijums * ielasitMerijumus(char* filename, int n);


#endif /* UTILITES_H */

