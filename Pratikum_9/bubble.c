// Nama file : Segitiga.c
// Pembuat   : Kharisma Andini Putri
// NIM/Kelas : 24060121140119/A Informatika
// Tanggal   : 24 Maret 2021
// Deskripsi : mengurutkan array menggunakan counting sort secara descending

#include <stdio.h>

int main() {
    int T[] = {5, 28, 29, 10, 16, 18, 9, 11, 40};
    int N = 9;
    int i, j;
    for (i = 0; i < N - 1; i++) {
 
        // Last i elements are already in place
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