#include "failudarbibas.h"

void printFile(char* filepath) {
    FILE* fp;

    fp = fopen(filepath, "r");
    //Pa simboliem
    //    char ch;
    //    while (1) {
    //        ch = fgetc(fp); // Read a Character
    //        if (ch == EOF) // Check for End of File
    //            break;
    //
    //        printf("%c", ch);
    //    }
    char buff[255];
    while (1) {
        int f = fscanf(fp, "%s", buff);
        if (f == EOF) {
            break;
        }

        printf("%s\n", buff);
    }
    fclose(fp);
}




void writeToFile(char* filepath, char* text) {
    FILE* fp;
    fp = fopen(filepath, "w");
    fprintf(fp, text);
    fclose(fp);
}

void appendToFile(char* filepath, char* text) {
    FILE* fp;
    fp = fopen(filepath, "a");
    fprintf(fp, text);
    fclose(fp);
}