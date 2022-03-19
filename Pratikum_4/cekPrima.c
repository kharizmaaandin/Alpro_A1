// Nama File        : [ cekPrima.c ]
// Deskripsi        : [ mengecek sebuah bilangan integer sembarang N (N>0) prima atau tidak ] 
// Pembuat          : [ Kharisma Andini Putri ] 
// Tgl pembuatan    : [ Sabtu, 19-03-2022 11:10 WIB  ]

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int banyakFaktor = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            banyakFaktor++;
        }
    }

    if (banyakFaktor == 2) {
        printf("Bilangan Prima");
    } else {
        printf("Bukan Bilangan Prima");
    }
}