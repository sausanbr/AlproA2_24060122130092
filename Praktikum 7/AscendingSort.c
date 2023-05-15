/*
Nama Program    : AscendingSort.c
Deskripsi 	    : Mengurutkan nilai tabel secara ascending (urut naik)
Nama Pembuat    : Sausan Berliana Arrizqi
NIM             : 24060122130092
Tgl Pembuatan	  : 15 Mei 2023 
*/

#include <stdio.h>

void swap(int *a, int *b) {
  // Kamus Lokal
  int temp = *a;
  *a = *b;
  *b = temp;
}

void AscendingSort(int tabel[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int IMin = step;
    for (int i = step + 1; i < size; i++) {
      if (tabel[i] < tabel[IMin])
        IMin = i;
    }
    swap(&tabel[IMin], &tabel[step]);
  }
}

void printTabel(int tabel[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", tabel[i]);
  }
  printf("\n");
}

int main() {
  int tabel[] = {9, 27, 6, 45,28};
  int size = sizeof(tabel) / sizeof(tabel[0]);
  AscendingSort(tabel, size);
  printf("Urutan tabel secara Ascending =\n");
  printTabel(tabel, size);
  return 0;
}