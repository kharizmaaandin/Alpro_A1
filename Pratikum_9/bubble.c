// Nama File        : [ bubble.c ]
// Deskripsi        : [ mengurutkan array menggunakan bubble sort secara descending ] 
// Pembuat          : [ Kharisma Andini Putri ] 
// Tgl pembuatan    : [ Rabu, 27-04-2022 23:11 WIB ]

#include <stdio.h>

int main() {
    int T[] = {5, 28, 29, 10, 16, 18, 9, 11, 40};
    int N = 9;
    int i, j;
    for (i = 0; i < N - 1; i++) {
 
        for (j = 0; j < N - i - 1; j++)
            if (T[j] < T[j + 1]) {
                int temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
            }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
}