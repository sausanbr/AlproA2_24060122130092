/*
Nama Program  : gayaSentr.c
Deskripsi     : Menghitung dan menampilkan gaya sentripetal F di layar, F = m*(v^2/r)
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 24 Februari 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    float F,m,v,r;
    
    // Algoritma
    printf("Masukkan nilai m (kg) = ");
    scanf("%f",&m);
    printf("Masukkan nilai v (m/s) = ");
    scanf("%f",&v);
    printf("Masukkan nilai r (m) = ");
    scanf("%f",&r);
    F = m*(v*v/r);
    printf("Nilai F = %f", F);
    return 0;
}