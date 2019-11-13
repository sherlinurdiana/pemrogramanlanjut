#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



float pangkatrekursif (float a,float b)
{
	
	if(b==0) {
		return 1;
	}	
	if (b<=-1)
		return pangkatrekursif(a, b+1)/a;// pangkat <=-1
	else
        return pangkatrekursif(a, b-1)*a; // pangkat >=1  
	}


int main()
	
 {	float a,b,c,d,e,hasil;
 	
 	for(c=0;c<=60;c++){
 		printf("*");
	 }
	printf ("\n \t ***********PANGKAT  REKURSIF**************");
 	printf ("\n Masukan bilangan yang akan dipangkatkan = ");
 	scanf("%f",&a);
 	printf("\n masukan pangkat \t\t\t = ");
 	scanf("%f",&b);
 	
 	hasil=pangkatrekursif(a,b);
 	
 	printf(" \n hasil pangkat rekursifnya adalah  \t = %f \n\n",hasil); 
	

		for(d=0;d<=60;d++){
 		printf("*");
	 }
	return 0;
	
}
