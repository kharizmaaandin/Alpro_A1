// Nama File        : [ insertion.c ]
// Deskripsi        : [ mengurutkan array menggunakan insertion sort secara descending ] 
// Pembuat          : [ Kharisma Andini Putri ] 
// Tgl pembuatan    : [ Rabu, 27-04-2022 23:11 WIB ]

#include <stdio.h>

int main() {
    int T[] = {5, 28, 29, 10, 16, 18, 9, 11, 40};
    int N = 9;
    int i, temp, j;
    for (i = 1; i < N; i++) {
        temp = T[i];
        j = i - 1;
        while (j >= 0 && T[j] < temp) {
            T[j + 1] = T[j];
            j = j - 1;
        }
        T[j + 1] = temp;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
}