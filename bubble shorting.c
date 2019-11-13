#include <stdio.h>

void bubbleSort(int angka[], int n)
{
  int a, b, temp;

  for(a = 0; a< n; a++)
  {
    for(b=0; b < n-a-1; b++){
      if(angka[b] > angka[b+1]){
        temp = angka[b];
        angka[b] = angka[b+1];
        angka[b+1] = temp;
      }
    }
  }
}

int main()
{
  int array[100], n, a, b;
  printf(" ++++++++ Bubble Shorting +++++++++++\n\n");
  printf("Masukkan Banyak Elemen: ");
  scanf("%d", &n);
  printf("\nMasukkan Nilai: \n");
  for(a = 0; a< n; a++)
  {
    scanf("%d", &array[a]);
  }
  bubbleSort(array, n);
  printf("\nNilai yaang telah diurutkan:\n");
  for(a = 0; a < n; a++)
  {
    printf("%d ", array[a]);
  }
  printf("\n");
}
