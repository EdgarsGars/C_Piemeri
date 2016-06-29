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

int main(int argc, char** argv) {

    Skolens sk = newSkolens("Edgars", "Garsneks", 3);
    Skolens sk1 = newSkolens("Peteris", "Nazis", 2);



    printf("%s", sk.prieksmeti[0].nosaukums);


    return EXIT_SUCCESS;
}

Skolens newSkolens(char* vards, char* uzvards, int klase) {
    Skolens sk;
    Prieksmets prieksmeti[3];
    
    sk.vards = vards;
    sk.uzvards = uzvards;
    sk.klase = klase;
    
    prieksmeti[0] = newPrieksmets("Matematika", 10, 3);
    prieksmeti[1] = newPrieksmets("Fizika", 20, 4);
    prieksmeti[2] = newPrieksmets("Sports", 15, 10);
    
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
