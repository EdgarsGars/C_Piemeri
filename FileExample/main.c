/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Edgar
 *
 * Created on 7 июля 2016 г., 17:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "failudarbibas.h"

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(NULL));
    //    writeToFile("C:\\Users\\Edgar\\Documents\\NetBeansProjects\\CKursi\\FileExample\\file1.txt", "Hello,World!");
    //    writeToFile("file2.txt", "Hello,World!");
    //    writeToFile("./file3.txt", "Hello,World!");
    //    writeToFile("./dist/file4.txt", "Hello,World!");
    //    writeToFile("../file5.txt", "Hello,World!");
    for (int i = 0; i < 30; i++) {
        char text[30];
        sprintf(text, "%d %d\n", i + 1, rand() % 30 + 20);
        appendToFile("temp.txt", text);
    }


    return (EXIT_SUCCESS);
}

