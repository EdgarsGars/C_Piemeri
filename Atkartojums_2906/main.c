#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct {
    char* nosaukums;
    int stunduSkaits;
    int atzimjuSkaits;
    int* atzimes;
    int* apmeklejums;
} Prieksmets;

typedef struct {
    char* vards;
    char* uzvards;
    int klase;
    Prieksmets* prieksmeti;

} Skolens;

Skolens newSkolens(char* vards, char* uzvards, int klase);
Prieksmets newPrieksmets(char* nosaukums, int stunduSkaits, int atzimjuSkaits);
Prieksmets newPrieksmets2(char* nosaukums, int stunduSkaits, int atzimjuSkaits, int* atzimes, int* apmeklejums);

void randomAtzimes(Skolens sk);

int getAtzime(Skolens sk, char* nosaukums, int i);
void setAtzime(Skolens sk, char* nosaukums, int i, int atzime);

int main(int argc, char** argv) {
    srand(time(NULL));
    Skolens skoleni[3];
    skoleni[0] = newSkolens("Edgars", "Garsneks", 3);
    skoleni[1] = newSkolens("Bob", "Bobito", 2);
    skoleni[2] = newSkolens("Peteris", "Lauritis", 3);

    for (int i = 0; i < 3; i++) {
        randomAtzimes(skoleni[i]);
    }
    printf("%d", skoleni[0].prieksmeti[0].apmeklejums[0]);





    return EXIT_SUCCESS;
}

Skolens newSkolens(char* vards, char* uzvards, int klase) {
    Skolens sk;
    Prieksmets prieksmeti[3];

    sk.vards = vards;
    sk.uzvards = uzvards;
    sk.klase = klase;

    prieksmeti[0] = newPrieksmets("Matematika", 3, 4);
    prieksmeti[1] = newPrieksmets("Fizika", 3, 4);
    prieksmeti[2] = newPrieksmets("Sports", 3, 4);

    sk.prieksmeti = prieksmeti;
    return sk;
}

Prieksmets newPrieksmets(char* nosaukums, int stunduSkaits, int atzimjuSkaits) {
    Prieksmets pk;
    pk.nosaukums = nosaukums;
    pk.stunduSkaits = stunduSkaits;
    pk.atzimjuSkaits = atzimjuSkaits;

    int a[atzimjuSkaits];
    int na[stunduSkaits];

    pk.atzimes = a;
    pk.apmeklejums = na;

    for (int i = 0; i < atzimjuSkaits; i++) {
        *(pk.atzimes + i) = 0; //[i]
    }

    for (int i = 0; i < stunduSkaits; i++) {
        pk.apmeklejums[i] = 0;
    }
    return pk;
}

Prieksmets newPrieksmets2(char* nosaukums, int stunduSkaits, int atzimjuSkaits, int* atzimes, int* apmeklejums) {
    Prieksmets pk;
    pk.nosaukums = nosaukums;
    pk.stunduSkaits = stunduSkaits;
    pk.atzimjuSkaits = atzimjuSkaits;

    pk.atzimes = atzimes;
    pk.apmeklejums = apmeklejums;
    return pk;
}

void setAtzime(Skolens sk, char* nosaukums, int i, int atzime) {
    for (int pk = 0; pk < 3; pk++) {
        if (sk.prieksmeti[pk].nosaukums == nosaukums) {
            sk.prieksmeti[pk].atzimes[i] = atzime;
        }
    }
}

int getAtzime(Skolens sk, char* nosaukums, int i) {
    for (int pk = 0; pk < 3; pk++) {
        if (sk.prieksmeti[pk].nosaukums == nosaukums) {
            return sk.prieksmeti[pk].atzimes[i];
        }
    }
    return 0;
}

void randomAtzimes(Skolens sk) {
    for (int pk = 0; pk < 3; pk++) {
        for (int a = 0; a < sk.prieksmeti[pk].atzimjuSkaits; a++) {
            sk.prieksmeti[pk].atzimes[a] = rand() % 10 + 1;
        }

        for (int n = 0; n < sk.prieksmeti[pk].stunduSkaits; n++) {
            //sk.prieksmeti[pk].apmeklejums[n] = rand() % 2; //50:50
            if (rand() % 100 <= 70) { // 70:30
                sk.prieksmeti[pk].apmeklejums[0] = 1;
            } else {
                //   sk.prieksmeti[pk].apmeklejums[n] = 0;
            }
        }

    }
}