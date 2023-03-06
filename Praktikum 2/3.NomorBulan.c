/*
Nama Program  : NomorBulan.c
Deskripsi     : Menampilkan nama bulan berdasarkan nomor yang diinput
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 3 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int bul;
    
    // Algoritma
    printf("Masukkan nomor bulan = ");
    scanf("%d", &bul);

    if (bul >= 1 && bul <= 12){
        if (bul == 1){
            printf("Januari");
        } else if (bul == 2){
            printf("Februari");
        } else if (bul == 3){
            printf("Maret");
        } else if (bul == 4){
            printf("April");
        } else if (bul == 5){
            printf("Mei");
        } else if (bul == 6){
            printf("Juni");
        } else if (bul == 7){
            printf("Juli");
        } else if (bul == 8){
            printf("Agustus");
        } else if (bul == 9){
            printf("September");
        } else if (bul == 10){
            printf("Oktober");
        } else if (bul == 11){
            printf("November");
        } else if (bul == 12){
            printf("Desember");
        }
    } else{
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}