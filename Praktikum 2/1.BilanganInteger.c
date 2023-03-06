/*
Nama Program  : BilanganInteger.c
Deskripsi     : Mengecek apakah nilai input adalah bilangan integer
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 3 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int Bil;
    
    // Algoritma
    printf("Masukkan input = ");
    if (scanf("%d", &Bil)){
        if (Bil > 0){
            printf("Bilangan bulat positif");
        } else if (Bil == 0){
            printf("Bilangan nol");
        } else if (Bil < 0){
            printf("Bilangan bulat negatif");
        }
    } else {
        printf("Bukan termasuk sebuah bilangan");
    }
    return 0;
}