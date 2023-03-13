/*
Nama Program  : CekBilSemp.c
Deskripsi     : Mengecek apakah input N bilangan sempurna
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 12 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int i,N,total;
    
    // Algoritma
    printf("Masukkan bilangan = ");
    scanf("%d", &N);

    if (N>0){
        total = 0;
        for (i=1; i<N; i++){
            if (N%i == 0){
                total = total+i;
            }
        } if (total==N){
            printf("Bilangan sempurna");
        } else{
            printf("Bukan bilangan sempurna");
        }
    } else{
        printf("Bilangan harus positif");
    }
    return 0;
}