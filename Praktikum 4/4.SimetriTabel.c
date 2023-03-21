/*
Nama Program  : SimetriTabel.c
Deskripsi     : Menentukan apakah tabel 1 dan tabel 2 simetri
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 21 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h> 
int  main(void){
    // Kamus Lokal
    int *T1, *T2; //tabel [1..N]
    int elmt1, elmt2; //panjang tabel 1 dan tabel 2
    int i; //counter
    int sama; //kemunculan elemen tabel yang sama

    // Algoritma
    printf("Masukkan panjang tabel 1 = ");
    scanf("%d", &elmt1);
    printf("Masukkan panjang tabel 2 = ");
    scanf("%d", &elmt2);
    printf("\n");

    T1 = (int*)malloc(elmt1*(sizeof(int)));
    T2 = (int*)malloc(elmt2*(sizeof(int)));

    if (elmt1<=0 && elmt2 <= 0){
        printf("Bilangan harus positif");
    } else {
        if (elmt1!= elmt2){
            printf("Tabel tidak simetris");
        }
        else { // elmt1 == elmt2
            for (i=0; i<elmt1; i++){
                printf("Masukkan nilai tabel 1 ke-%d = ", i+1);
                scanf("%d", T1+i);
            }
            printf("\n");
            for (i=0; i<elmt2; i++){
                printf("Masukkan nilai tabel 2 ke-%d = ", i+1);
                scanf("%d", T2+i);
            }
            printf("\n");
            sama = 0;
            for (i=0; i<elmt1; i++){
                if (T1[i] == T2[i]){
                    sama = sama +1;
                }
            }
            if (sama == elmt1){
                printf ("Tabel simetri");
            }
            else{
                printf("Tabel tidak simetri");
                }
            } 
        }
    return 0;
}