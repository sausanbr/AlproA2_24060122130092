/*
Nama Program  : Tahanan.c
Deskripsi     : Menampilkan total tahanan dan masukan tahanan tidak boleh negatif
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 3 Maret 2023
*/
#include <stdio.h>
int  main(void){
        // Kamus Lokal
    int t1, t2, t3, total;
    
    // Algoritma
    printf("Masukkan nilai tahanan 1 = ");
    scanf("%d", &t1);
    printf("Masukkan nilai tahanan 2 = ");
    scanf("%d", &t2);
    printf("Masukkan nilai tahanan 3 = ");
    scanf("%d", &t3);

    if (t1 >= 0 && t2 >= 0 && t3 >= 0){
        total = t1+t2+t3;
        printf("Total tahanan = %d",total);
    } else {
        printf("Masukan tahanan tidak boleh negatif");
    }
    
    return 0;
}