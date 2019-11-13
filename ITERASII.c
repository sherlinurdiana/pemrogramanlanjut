#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(){
	
	int a,b,c,d;
	printf(" \t\t ITERASI \n");
	printf("*******************************************\n\n");
	printf("Masukan angka   = ");
	scanf("%d",&a);
	printf("\n");
	printf("Masukan pangkat = ");
	scanf("%d",&b);

for(c=1;c<=b;c++){
	d=d*a;
}
	printf("\n");
	printf("*******************************************\n\n");
	printf(" angka %d dipangkatkan %d = %d",a,b,d);
	return 0;
}


























