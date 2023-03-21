/* 
Nama Program  : JumBarKolMat.c
Deskripsi     : Menampilkan jumlah setiap baris dan kolom tabel
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 21 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Kamus Lokal
    int **tabel; //tabel[1..N][1..N]
    int baris, kolom; //panjang baris, panjang kolom
    int i,j; //counter
    int jumBar, jumKol; //penjumlahan baris, penjumlahan kolom

    printf("Masukkan panjang baris = ");
    scanf("%d",&baris);
    printf("Masukkan panjang kolom = ");
    scanf("%d",&kolom);
    printf("\n");

    tabel = (int**)malloc(baris*sizeof(int*));
    for (i=0;i<baris;i++){
        tabel[i] = (int*)malloc(kolom*sizeof(int));
    }

    if(baris<= 0 && kolom<= 0){
        printf("Bilangan harus positif");
    }
    else {
        for (i=0; i<baris; i++){
            for (j=0; j<kolom; j++){
                printf("Masukkan nilai baris ke-%d dan kolom ke-%d = ", i+1,j+1);
                scanf("%d",&tabel[i][j]);
            }
        }
        printf("\n");
        for (i=0; i<baris; i++){
            jumBar = 0;
            for (j=0; j<kolom; j++){
                jumBar = jumBar + tabel[i][j];
            }
            printf("Jumlah baris ke %d = %d \n",i+1,jumBar);
        }
        printf("\n");
        for (i=0; i<baris; i++){
            jumKol = 0;
            for (j=0; j<kolom; j++){
                jumKol = jumKol + tabel[j][i];
            }
            printf("Jumlah kolom ke %d = %d\n",i+1,jumKol);
        }

    }
    return 0;
}
