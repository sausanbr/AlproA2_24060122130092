/*
Nama Program  : FaktorBil.c
Deskripsi     : Menampilkan faktor bilangan N
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 12 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int i,N;
    
    // Algoritma
    printf("Masukkan bilangan = ");
    scanf("%d",&N);

    if (N>0){
        for (i=1; i<=N; i++){
            if (N%i == 0){
            printf("%d ",i);
            }
        } 
    } else{
        printf("Bilangan harus positif");
    }
    return 0;
}