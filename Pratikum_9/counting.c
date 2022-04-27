// Nama file : couting.c
// Pembuat   : Kharisma Andini Putri
// NIM/Lab   : 24060121140119 / A1 Informatika
// Tanggal   : 27 April 2022
// Deskripsi : mengurutkan array menggunakan counting sort secara descending

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
            printf("%d, " ,i);
        }
    }
}