/*
Nama Program  : jarakGLBB.c
Deskripsi     : Menghitung dan menampilkan jarak s di layar, s = v0*t+(0.5*a*t*t)
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 24 Februari 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    float v0,t,a,s;
    
    // Algoritma
    printf ("Masukkan nilai v0 (m/s) = ");
    scanf("%f",&v0);
    printf ("Masukkan nilai t (s) = ");
    scanf("%f",&t);
    printf ("Masukkan nilai a (m/s^2) = ");
    scanf("%f",&a);
    s = v0*t+(0.5*a*t*t);
    printf("Nilai jarak = %f", s);
    return 0;
}