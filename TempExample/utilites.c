#include <stdlib.h>

#include "utilites.h"

void generateData(char* filename, int n) {
    FILE* fp;
    fp = fopen(filename, "a");
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