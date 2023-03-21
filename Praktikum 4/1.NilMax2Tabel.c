/*
Nama Program  : NilMax2Tabel.c
Deskripsi     : Menampilkan nilai maksimum ke-2 dari sebuah tabel
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 19 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h> 
int main(void){
    // Kamus Lokal
    int *tabel; //tabel [1..N]
    int n; //panjang tabel 
    int i; //counter
    int elmt; //masukan elemen tabel
    int terbesar1, terbesar2; //nilai terbesar dan terbesar ke-2 tabel

    // Algoritma
    printf("Masukkan panjang tabel = ");
    scanf("%d", &n);
    if (n<=0){
        printf("Bilangan harus positif");
    } else {
        tabel = (int*)malloc(n*(sizeof(int)));
        for (i=0; i<n; i++){
            printf("Masukkan nilai ke-%d = ", i+1);
            scanf("%d", &elmt);
            if (elmt>0){
                tabel[i]=elmt;
            } else {
                i--;
            }
        } 
        terbesar1 = tabel[0];
        for (i=1;i<n;i++){
            if (tabel[i] > terbesar1){
                terbesar2 = terbesar1;
                terbesar1 = tabel[i];
            } else if (tabel[i] > terbesar2 && tabel[i]<terbesar1){
                terbesar2 = tabel[i];
            }
        } 
        printf ("Bilangan terbesar kedua = %d", terbesar2);
    }

    return 0;
}