/*
Nama Program  : volBolaKerct.c
Deskripsi     : Menghitung dan menampilkan volume bola dengan formula Vb = 4/3*(phi*r^3) dan volume kerucut dengan formula Vk = 1/2*Vb
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 24 Februari 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    float r,Vb,Vk;
    const double phi = 3.14;
    
    // Algoritma
    printf("Masukkan nilai jari-jari (m) = ");
    scanf("%f",&r);
    Vb = 1.333*(phi*r*r*r);
    Vk = 0.5*Vb;
    printf("Nilai volume bola = %f\n",Vb);
    printf("Nilai volume kerucut = %f",Vk);
    return 0;
}