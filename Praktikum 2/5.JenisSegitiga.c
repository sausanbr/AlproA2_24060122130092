/*
Nama Program  : CekSegitiga.c
Deskripsi     : Menampilkan jenis segitiga berdasarkan sisinya
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 3 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int s1,s2,s3;
    
    // Algoritma
    printf("Masukkan sisi 1 segitiga = ");
    scanf("%d",&s1);
    printf("Masukkan sisi 2 segitiga = ");
    scanf("%d",&s2);
    printf("Masukkan sisi 3 segitiga = ");
    scanf("%d",&s3);
    
    if (s1+s2 > s3 || s1+s3 > s2 || s2+s3 > s1){
        if (s1 == s2 == s3){
            printf("Segitiga Sama Sisi");
        } else if (s1 == s2 || s1 == s3 || s2 == s3){
            printf("Segitiga Sama Kaki");
        } else if (s1!=s2!=s3){
            printf("Segitiga Sembarang");
        }
    } else {
        printf("Terdapat nilai yang bukan segitiga");
    }
    return 0;
}
