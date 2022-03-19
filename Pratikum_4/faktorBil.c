// Nama File        : [ faktorBil.c ]
// Deskripsi        : [ menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0) ] 
// Pembuat          : [ Kharisma Andini Putri ] 
// Tgl pembuatan    : [ Sabtu, 19-03-2022 11:00 WIB  ]

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d \n", i);
        }
    }
}