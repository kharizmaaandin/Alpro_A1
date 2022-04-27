// Nama file : Segitiga.c
// Pembuat   : Kharisma Andini Putri
// NIM/Kelas : 24060121140119/A Informatika
// Tanggal   : 24 Maret 2021
// Deskripsi : mengurutkan array menggunakan counting sort secara descending

#include <stdio.h>

int main() {
    int T[] = {5, 28, 29, 10, 16, 18, 9, 11, 40};
    int N = 9;
    for (int pass = 0; pass < N-1; pass++ ) {
        int iMax = pass;
        for (int i = pass + 1; i < N; i++) {
            if (T[iMax] < T[i]) {
                iMax = i;
            }
        }
        int temp = T[iMax];
        T[iMax] = T[pass];
        T[pass] = temp;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
}