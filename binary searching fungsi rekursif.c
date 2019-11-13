#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int BinarySearch(int data[], int s, int t, int u){
    int v = (s+t)/2;
    if(s>t){
      return -1;
    } 
    if(data[v] == u){
      return t;
    }
    if(data[v] < u){
      return BinarySearch(data, v+1, t, u);
    } else {
      return BinarySearch(data, s, v-1, u);
    }
}

void view(int i, int data[]){
    for(i=0; i<12; i++){
        printf("%d, ", data[i]);
    }
}

void urutkan(int i, int j, int data[]){
    for (i = 0; i < 12 - 1; i++) {
      for (j = 12 - 1; j > i; j--) {
        if (data[i] > data[j]) {
          int temp = data[j];
          data[j] = data[i];
          data[i] = temp;
        }
      }
    }
}

int main(){
    int bil[12] = {3,7,5,2,8,1,9,10,12,21,11,13};
    int i, j, posisi, cari;

    int n = sizeof(bil)/sizeof(bil[0]);
    printf("\n===================================================\n");
    printf("Jumlah baris angka  : %d\n", n);
	printf("\n===================================================");
    printf("\nBaris angka yang belum diurutkan : \n\n");
    view(i, bil);

    urutkan(i,j,bil);
	printf("\n===================================================");
    printf("\nBaris angka yang telah diurutkan\n\n");
    view(i, bil);
	printf("\n===================================================\n");
    printf("\nMasukan angka yang akan dicari : "); 
	scanf("%d", &cari);
    posisi = BinarySearch(bil, 0, n-1, cari);
    printf("\n===================================================\n");
    if(posisi < 0){
      printf("Angka %d pada array tidak ditemukan", cari);
    } else {
      printf("angka %d ditemukan pada indeks %d setelah diurutkan", cari, posisi+1);
    }
    printf("\n===================================================\n");
    getch();
    return 0;
}
