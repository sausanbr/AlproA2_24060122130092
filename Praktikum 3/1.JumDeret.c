/*
Nama Program  : JumDeret.c
Deskripsi     : Menjumlahkan deret 1+2+..+N sebanyak N (N>0)
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 6 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int i, N, jumlah;
    
    // Algoritma
    printf("Masukkan batas bilangan = ");
    scanf("%d", &N);
    if (N<=0){
        printf("Bilangan harus positif");
    } else{
        jumlah = 0;
        for (i = 1; i<=N; i++){
            jumlah = jumlah + i;
        } printf ("%d", jumlah);
    }

    return 0;
}