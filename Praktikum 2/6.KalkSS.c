/*
Nama Program  : KalkSS.c
Deskripsi     : Membuat kalkulator super sederahana yang menampilkan hasil operasi berdasarkan pilihan huruf yang dimasukkan
Nama Pembuat  : Sausan Berliana Arrizqi
NIM           : 24060122130092
Tanggal       : 4 Maret 2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int iA, iB;
    char operasi;
    
    // Algoritma
    printf("Masukkan huruf operasi = ");
    scanf("%c", &operasi);
    printf("Masukkan nilai integer A = ");
    scanf("%d", &iA);
    printf("Masukkan nilai integer B = ");
    scanf("%d", &iB);

    if (operasi == 'a' || operasi == 'b' || operasi == 'c' || operasi == 'd' || operasi == 'e' || operasi == 'f'){
        if (operasi == 'a'){
            printf("Hasil dari A+B = %d", iA+iB);
        } else if (operasi == 'b'){
            printf("Hasil dari A-B = %d", iA-iB);
        } else if (operasi == 'c'){
            printf("Hasil daRi A*B = %d", iA*iB);
        } else if (operasi == 'd'){
            printf("Hasil dari A/B = %.2f", (float)iA/iB);
        } else if (operasi == 'e'){
            printf("Hasil dari A div B = %d", iA/iB);
        } else if (operasi == 'f'){
            printf("Hasil dari A mod B = %d", iA%iB);
        }
    } else {
        printf("Bukan pilihan menu yang benar");
    }
    return 0;
}