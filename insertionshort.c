#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,array[5]={8,6,2,1,9};
	printf("\t\t++++++++++Insertion Short +++++++++++\n\n");
	printf("Data Awal =");
	for(a=0;a<5;a++){
		printf(" %i,",array[a]);
	}
	printf("\n");
	for(int a=1;a<5;a++){
		for(int b=a; b>0 && array[b]<array[b-a];b++){
			int temp=array[b-a];
			array[b-a]=array[b];
			array[b]=temp;
		}
	}
	printf("\n");
	printf("data yang telah urut = ");
	for(int a=0;a<5;a++){
		printf("  %d,",array[a]);
	}
	printf("\n");
//	getchar();
	return 0;
}
