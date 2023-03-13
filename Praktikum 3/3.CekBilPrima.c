/*
Nama Program  : CekBilPrima.c
Deskripsi     : Mengecek input N bilangan prima atau tidak
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 12 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int i,N,faktor;
    
    // Algoritma
    printf("Masukkan bilangan = ");
    scanf("%d",&N);

    if (N > 0){
        faktor=0;
        for (i=1; i<=N; i++){  
            if (N%i==0){
                faktor=faktor+1;
            }
        } if (faktor==2){
            printf("Bilangan prima");
        } else {
            printf("Bukan bilangan prima");
        } 
    } else{
        printf("Bilangan harus positif");
    }return 0;
}