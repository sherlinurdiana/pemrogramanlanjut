#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){
	int data [3][3][3] = {{{5,1,5},{6,2,8},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}},{{3,1,2},{-5,2,1},{-2,5,1}}};	

	int a,b,c;
	float lin_ab[2], lin_bc[2];
	float hsl_ab, hsl_bc, hsl_ab1, hsl_bc1, hsl_ab2, hsl_bc2;
	for(a=0; a<3; a++){
		printf("____________________________________________________\n");
		printf("Array 2dimensi %d \n", a+1);
		printf("____________________________________________________\n");
		printf("  x     y    z \n");	
			
		for(b=0; b<3; b++){
			for(c=0; c<3; c++){
				printf("  %d  ", data[a][b][c]);
			}
		printf("\n");
		}
	printf("\n");
	lin_ab[a] = sqrt((pow(data[a][0][0] - data[a][1][0],2))+(pow(data[a][0][1] - data[a][1][1],2))+(pow(data[a][0][2] - data[a][1][2],2)));
	lin_bc[a] = sqrt((pow(data[a][1][0] - data[a][2][0],2))+(pow(data[a][1][1] - data[a][2][1],2))+(pow(data[a][1][2] - data[a][2][2],2)));	
		printf("====================================================\n");
		printf("Lintasan AB %d = %f",a+1,lin_ab[a]);
		printf("\nLintasan BC %d = %f", a+1,lin_bc[a]);
		printf("\nHasil = %f\n\n",lin_ab[a]+lin_bc[a]);
		printf("====================================================\n");

	}

	system("pause");
	return 0;
	
}
