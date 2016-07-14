#include <stdlib.h>

#include "utilites.h"

/**
 * Generate n data records
 * @param filename
 * @param n
 */
void generateData(char* filename, int n) {
    FILE* fp;
    fp = fopen(filename, "w");
    for (int i = 0; i < n; i++) {
        int t = rand() % 90 + 10;
        fprintf(fp, "%d;%d\n", i + 1, t);
    }
    fclose(fp);
}

Merijums * ielasitMerijumus(char* filename, int n) {
    Merijums* merijumi;
    merijumi = malloc(n * sizeof (Merijums));
    FILE* fp;
    fp = fopen(filename, "r");
    for (int i = 0; i < n; i++) {
        int d, t;
        fscanf(fp, "%d;%d", &d, &t);
        merijumi[i].n = d;
        merijumi[i].t = t;
    }
    fclose(fp);

    return merijumi;
}

double avg(Merijums* merijumi, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += merijumi[i].t;
    }
    return sum / (double) n;
}

double max(Merijums* merijumi, int n) {
    double max = merijumi[0].t;
    for (int i = 1; i < n; i++) {
        if (merijumi[i].t > max) {
            max = merijumi[i].t;
        }
    }
    return max;
}

double min(Merijums* merijumi, int n) {
    double min = merijumi[0].t;
    for (int i = 1; i < n; i++) {
        if (merijumi[i].t < min) {
            min = merijumi[i].t;
        }
    }
    return min;
}

void findEqualTo(Merijums* merijumi, int n, double t, Merijums** atrastie, int* garums) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t == t) {
            count++;
        }
    }
    *garums = count;

    Merijums* result = malloc(count * sizeof (Merijums));
    count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t == t) {
            result[count++] = merijumi[i];
        }
    }
    *atrastie = result;

}

void lessThan(Merijums* merijumi, int n, double t, Merijums** atrastie, int* garums) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t < t) {
            count++;
        }
    }
    *garums = count;

    Merijums* result = malloc(count * sizeof (Merijums));
    count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t < t) {
            result[count++] = merijumi[i];
        }
    }
    *atrastie = result;
}

void greaterThan(Merijums* merijumi, int n, double t, Merijums** atrastie, int* garums) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t > t) {
            count++;
        }
    }
    *garums = count;

    Merijums* result = malloc(count * sizeof (Merijums));
    count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t > t) {
            result[count++] = merijumi[i];
        }
    }
    *atrastie = result;
}

void between(Merijums* merijumi, int n, double t0, double t1, Merijums** atrastie, int* garums) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t > t0 && merijumi[i].t < t1) {
            count++;
        }
    }
    *garums = count;

    Merijums* result = malloc(count * sizeof (Merijums));
    count = 0;
    for (int i = 0; i < n; i++) {
        if (merijumi[i].t > t0 && merijumi[i].t < t1) {
            result[count++] = merijumi[i];
        }
    }
    *atrastie = result;
}

void printResults(Merijums* merijumi, int n) {
    for (int i = 0; i < n; i++) {
        printf("Merijums %d = %d\n", merijumi[i].n, merijumi[i].t);
    }
}