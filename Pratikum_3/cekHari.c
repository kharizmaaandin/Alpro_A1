// Nama File        : [ cekHari.c ]
// Deskripsi        : [ menampilkan nama-nama hari sesuai input ]
// Pembuat          : [ Kharisma Andini Putri ]
// Tgl pembuatan    : [ Rabu, 09-03-2022 00:36 WIB  ]

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    scanf("%d", &d);

    switch (d)
    {
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jumat");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;

    default:
        printf("Masukkan nomor hari tidak tepat");
        break;
    }
    return 0;
}
