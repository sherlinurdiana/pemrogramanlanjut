#include <stdio.h>
#include <stdlib.h>

/* selection short = pengurutan data yang mana jika telah di cek tidak perlu dicek lagi dari index pertama langsung melanjutkan pengecekan yang ke 2
insrtion short = data yang telah diurutkan dari indek pertama dicek lagi dari awal */

int main() {
	
	int a,b, aMin,temp,array[5]={8,6,2,1,9};
	printf("\t\t++++++++++Selection Short +++++++++++\n\n");
	printf("Data Awal =");
	for(a=0;a<5;a++){
		printf(" %i,",array[a]);
}
	printf("\n");
 for(a=0;a<5;a++){
        for(b= a+1;b<5;b++){
            if(array[a]>array[b]){
                temp=array[a];
                array[a]=array[b];
                array[b]=temp;
            }
        }
}
	printf("\n");
	printf("data yang telah urut = ");
	for(int a=0;a<5;a++){
		printf("  %d,",array[a]);
	}
	printf("\n");
	
	return 0;
}

