/*
Nama Program  : JumFrekNilTabel.c
Deskripsi     : Menampilkan hasil jumlah elemen tabel yang frekuensi kemunculannya lebih dari 1
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 21 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h> 
int  main(void){
    // Kamus Lokal
    int *tabel; //tabel [1..N]
    int n; //panjang tabel 
    int i, j; //counter
    int elmt; //masukan elemen tabel
    int sama; //nilai kemunculan elemen yang sama
    int jum; //penjumlahan elemen yang sama

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
        for (i=0; i<n; i++){
            sama = 0;
            for (j=0;j<n;j++){
                if (tabel[i] != 0 && tabel[i]==tabel[j]){
                    sama = sama+1;
                    }
                }     
            if (sama>=2){
                jum = jum+(tabel[i]);
                } 
            } 
        } 
    tabel[i]=0; 
    printf ("Nilai frekuensi elemen yang sama adalah = %d \n",jum); 
    free(tabel);
    return 0;
}
