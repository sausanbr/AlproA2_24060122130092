/*
Nama Program  : BilPrimaN.c
Deskripsi     : Menampilkan bilangan prima sampai batas n
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 12 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int N,i,j,jumlah;
    
    // Algoritma
    printf("Masukkan batas bilangan = ");
    scanf("%d", &N);

    if (N>0){
        for (i=1;i<=N;i++){
            jumlah=0;
            for (j = 1;j<=i;j++){
                if (i%j==0){
                    jumlah = jumlah+1;
                }
            } if (jumlah == 2){
                printf("%d ",i);
            }
        }
    } else{
        printf("Bilangan harus positif");
    }
    return 0;
}

