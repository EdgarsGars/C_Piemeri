#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define LIMIT 10
#define METIENU_SKAITS 20

#define R1 2
#define R2 3
#define R3 5
#define R4 9

#define RP1 100
#define RP2 60
#define RP3 40
#define RP4 20

typedef struct {
    double x, y;
} Point;

typedef struct {
    char* vards;
    Point metieni[METIENU_SKAITS];
    int punkti;
} Player;


Point metiens();
int punkti(Point p);
void rezultati(Player* sp, int N);

int main(int argc, char** argv) {
    srand(time(NULL));
    const int speletajuSkaits = 3;
    Player speletaji[speletajuSkaits];
    speletaji[0].vards = "Edgars";
    speletaji[1].vards = "Janis";
    speletaji[2].vards = "Peteris";
    speletaji[0].punkti = 0;
    speletaji[1].punkti = 0;
    speletaji[2].punkti = 0;

    for (int sp = 0; sp < speletajuSkaits; sp++) {
        for (int m = 0; m < METIENU_SKAITS; m++) {
            speletaji[sp].metieni[m] = metiens();
        }
    }

    rezultati(speletaji, speletajuSkaits);




    //Point m = metiens();
    // printf("(%f,%f) = %d\n", m.x, m.y, punkti(m));


    return (EXIT_SUCCESS);
}

Point metiens() {
    Point a;
    a.x = ((double) rand() / (double) RAND_MAX) * 2 * LIMIT - LIMIT;
    a.y = ((double) rand() / (double) RAND_MAX) * 2 * LIMIT - LIMIT;
    return a;
}

int punkti(Point p) {

    double distance = sqrt(p.x * p.x + p.y * p.y);
    //pow(p.x,3);
    if (distance <= R1) {
        return RP1;
    } else if (distance <= R2) {
        return RP2;
    } else if (distance <= R3) {
        return RP3;
    } else if (distance <= R4) {
        return RP4;
    }
    return 0;
}

void rezultati(Player* speletaji, int N) {
    for (int sp = 0; sp < N; sp++) {
        printf("%s\t", speletaji[sp].vards);
        for (int m = 0; m < METIENU_SKAITS; m++) {
            int pk = punkti(speletaji[sp].metieni[m]);
            speletaji[sp].punkti += pk;
            printf("%d\t", pk);
        }
        printf("|%d\n",speletaji[sp].punkti);
    }
}