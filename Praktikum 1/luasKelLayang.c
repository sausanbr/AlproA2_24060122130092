/*
Nama Program  : luasKelLayang.c
Deskripsi     : Menghitung dan menampilkan luas layang-layang dengan formula L = 1/2*(d1/d2) dan keliling layang-layang dengan formula kel = 2*(s1+s2)
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 24 Februari 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    float L,kel,d1,d2,s1,s2;
   
    // Algoritma
     printf("Masukkan nilai diagonal 1 (m) = ");
    scanf("%f",&d1);
    printf("Masukkan nilai diagonal 2 (m) = ");
    scanf("%f",&d2);
    L = 0.5*d1*d2;
    printf("Nilai luas layang-layang = %f\n",L);
    printf("Masukkan nilai sisi 1 (m) = ");
    scanf("%f",&s1);
    printf("Masukkan nilai sisi 2 (m) = ");
    scanf("%f",&s2);
    kel = 2*(s1+s2);
    printf("Nilai keliling layang-layang = %f",kel);
    return 0;
}