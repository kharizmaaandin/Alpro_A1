// Nama File        : [ counting.c ]
// Deskripsi        : [ mengurutkan array menggunakan counting sort secara descending ] 
// Pembuat          : [ Kharisma Andini Putri ] 
// Tgl pembuatan    : [ Rabu, 27-04-2022 23:11 WIB ]

#include <stdio.h>

int main() {
    int T[] = {5, 28, 29, 10, 16, 18, 9, 11, 40};
    int N = 9;
    int counter[100] = {0};
    for (int i = 0; i < N; i++) {
        counter[T[i]]++;
    }
    for (int i =99; i >= 0; i--) {
        for (int j = 0; j < counter[i]; j++) {
            printf("%d " ,i);
        }
    }
}