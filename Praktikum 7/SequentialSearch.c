/*
Nama Program    : SequentialSearch.c
Deskripsi 	    : Mencari nilai x dalam Tabel T [1..6] secara sekuensial mulai dari T1. Hasilnya adalah indeks IX
Nama Pembuat    : Sausan Berliana Arrizqi
NIM             : 24060122130092
Tgl Pembuatan	: 11 Mei 2023 
*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
    
    // Kamus Lokal
    int n = 5;
    int i = 0;
    int tabel[6] = {1,3,2,4,5,6};
    int IX;
    int x;


    // Algoritma
    printf("Masukkan bilangan yang akan dicari = ");
    scanf ("%d", &x);
    while ((i<n) && (tabel[i] != x)) {
        i = i+1;
    }
        if (tabel[i] == x){
            IX = i+1;   
            printf ("Indeks bilangan yang dicari = %d", IX);
        } 
        else {
            IX = 0;
            printf ("Indeks bilangan yang dicari = %d", IX);
        }

return 0;
}

    