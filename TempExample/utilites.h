#ifndef UTILITES_H
#define UTILITES_H

#include <stdio.h>
#include <time.h>

typedef struct {
    int n, t;
} Merijums;

void generateData(char* filename, int n);
Merijums * ielasitMerijumus(char* filename, int n);

//Statistics
double avg(Merijums* merijumi, int n);
double max(Merijums* merijumi, int n);
double min(Merijums* merijumi, int n);

//Search
/**
 * Meklejam merijumus ar noteiktu t
 */
void findEqualTo(Merijums* merijumi, int n, double t, Merijums** atrastie, int* garums);
void lessThan(Merijums* merijumi, int n, double t, Merijums** atrastie, int* garums);
void greaterThan(Merijums* merijumi, int n, double t, Merijums** atrastie, int* garums);
void between(Merijums* merijumi, int n, double t0, double t1, Merijums** atrastie, int* garums);

void printResults(Merijums* merijumi, int n);

#endif /* UTILITES_H */

