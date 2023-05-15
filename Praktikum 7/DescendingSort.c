/*
Nama Program    : DescendingSort.c
Deskripsi 	    : Mengurutkan nilai tabel secara descending (urut turun)
Nama Pembuat    : Sausan Berliana Arrizqi
NIM             : 24060122130092
Tgl Pembuatan	: 15 Mei 2023 
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    // Kamus Lokal
    int tabel1[20],tabel2[100], tabel3[20];
    int i; //indeks
    int j,n;
    int max=0; // nilai maksimum tabel1

    // Algoritma 
    printf("Masukan panjang tabel = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Masukan data ke-%d = ",i);
        scanf("%d",&tabel1[i]);
        if(max<tabel1[i]){
            max=tabel1[i]; // cari nilai maksimum pada tabel
        }
    }    
    for(i=0;i<=max;i++){
        tabel2[i] = 0;
    }
    for(j=1;j<=n;j++){ 
        tabel2[tabel1[j]] = tabel2[tabel1[j]]+1;
    }
    for(i=max;i>=1;i--){
        tabel2[i-1] = tabel2[i] + tabel2[i-1];
    }
    for(j=1;j<=n;j++){
        tabel3[tabel2[tabel1[j]]] = tabel1[j];
        tabel2[tabel1[j]]--;
    } 

    printf("Urutan tabel secara Descending = \n");
    for(i=1;i<=n;i++){ // print nilai array setelah diurutkan
        printf("%d ",tabel3[i]);
    }
    return 0;
}