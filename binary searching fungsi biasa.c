#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){

	int bil[] = {3,7,5,2,8,1,9,10,12,21,11,13};
	int n = sizeof(bil)/sizeof(bil[0]);
	int a, b, cari, c = 0, d = n-1, t = (a+b)/2;
	printf("\n================================================================\n");
	printf("\nBaris angka yang belum diurutkan = \n\n");
	for(a=0; a<n; a++){
        printf("%d, ", bil[a]);
    }
	printf("\n================================================================\n");
	for (a = 0; a < n - 1; a++) {
    	for (b = n - 1; b > a; b--) {
    		if (bil[a] > bil[b]) {
    			int temp = bil[b];
    			bil[b] = bil[a];
   				bil[a] = temp;
    		}
    	}
    }

    printf("\nBaris angka yang telah diurutkan = \n\n");
    for(a=0; a<n; a++){
        printf("%d, ", bil[a]);
    }
 	printf("\n================================================================\n");
	printf("\nMasukan angka yang akan dicari =  ");
	scanf("%d", &cari);
	printf("\n");
	while(c<=d){
		if(bil[t] < cari){
			c = t+1;
		} else if(bil[t] == cari){
			printf("Angka %d ditemukan pada indeks %d setelah diurutkan", cari, t+1);
			break;
		} else {
			d = t-1;
		}
		t = (c+d)/2;
		if(c>d){
			printf("Angka %d pada array tidak ditemukan", cari);
		}
	}
	printf("\n================================================================\n");
	getch();
	return 0;
}
