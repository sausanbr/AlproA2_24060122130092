/*
Nama Program  : BilSempN.c
Deskripsi     : Menampilkan bilangan sempurna sampai batas n
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 13 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int N,i,j,total;
    
    // Algoritma
    printf("Masukkan batas bilangan = ");
    scanf("%d", &N);

    if (N>0){
        for (i=1;i<N;i++){
            total=0;
            for (j = 1;j<=i;j++){
                if (i%j==0 && i!=j){
                    total = total+j;
                }
            } if (total == i){
                printf("%d ",i);
            }
        } 
    } else {
        printf("Bilangan harus positif");
    }
    return 0;
}    
