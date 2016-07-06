/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


int sum(int mas[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mas[i];
    }
    return sum;
}