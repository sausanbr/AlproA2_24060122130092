/*
Nama Program  : jarakPBola.c
Deskripsi     : Menghitung dan menampilkan jarak parabola y di layar, y = v0*t-(0.5*g*t*t)
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 24 Februari 2023
*/

#include <stdio.h>
int  main(void){
    // Kamus Lokal
    float y,v0,t;
    const double g = 9.8;
    
    // Algoritma
    printf("Masukkan nilai v0 (m/s) = ");
    scanf("%f",&v0);
    printf("Masukkan nilai t (s) = ");
    scanf("%f",&t);
    y = v0*t-(0.5*g*t*t);
    printf("Nilai jarak parabola adalah = %f",y);
    return 0;
}