// Nama File        : [ cekBulan.c ]
// Deskripsi        : [ menampilkan nama-nama bulan sesuai input ]
// Pembuat          : [ Kharisma Andini Putri ]
// Tgl pembuatan    : [ Rabu, 09-03-2022 00:36 WIB  ]

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d", &m);

    switch (m)
    {
    case 1:
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;

    default:
        printf("Masukkan nomor bulan tidak tepat");
        break;
    }
    return 0;
}
