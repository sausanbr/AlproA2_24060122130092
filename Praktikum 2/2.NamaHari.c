/*
Nama Program  : NamaHari.c
Deskripsi     : Menuliskan nama hari berdasarkan nomor hari
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 3 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int Nomor;
    
    // Algoritma
    printf("Masukkan nomor hari = ");
    scanf("%d", &Nomor);

    if (Nomor >= 1 && Nomor <= 7){
        if (Nomor == 1){
            printf("Senin");
        } else if (Nomor == 2){
            printf("Selasa");
        } else if (Nomor == 3){
            printf("Rabu");
        } else if (Nomor == 4){
            printf("Kamis");
        } else if (Nomor == 5){
            printf("Jumat");
        } else if (Nomor == 6){
            printf("Sabtu");
        } else if (Nomor == 7){
            printf("Minggu");
        }
    } else{
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}