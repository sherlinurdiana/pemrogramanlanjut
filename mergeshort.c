#include <stdio.h>
#include <stdlib.h>

void merge(int awal, int tengah, int akhir);
void mergeSort(int low, int up);
int a[50];

int main(){
	int n,i,batas;

	
	ulang :
	printf("\n+++++++++++++++++++ Merge Short+++++++++++++++++++++++\n\n");
	printf("\n Masukkan batas = ");
	scanf("%d",&n);

	if(n<=1){
		printf("\n +=======================+");
		printf("\n  Batas terlalu kecil");
		printf("\n +=======================+");
		Sleep(3000);
		system("cls");
		goto ulang;
	}
	else if(n>15){
		printf("\n +=====================================+");
		printf("\n Batas terlalu besar, silahkan ubah");
		printf("\n +=====================================+");
		Sleep(3000);
		system("cls");
		goto ulang;
	}
	else{	
	printf("\n");
	for(i=0;i<n;i++){
		printf(" Masukkan bilangan ke-%d : ",i+1);
		scanf("%d",&a[i]);
		fflush(stdin);
	}
}
printf("\n\n Data sebelum diurutkan : \n");
for(i=0;i<n;i++){
	printf(" %d ",a[i]);
}
printf("\n\n Data setelah diurutkan : \n");
mergeSort(0,n);
for(i=1;i<=n;i++){
	printf(" %d ",a[i]);
}
	printf("\n\n +================================================+");
	printf("\n Tekan [ENTER] jika ingin mengulang program");
	printf("\n +================================================+");
	getch();
	system("cls");
	goto ulang;
	return 0;
}

void merge(int awal, int tengah, int akhir){
int h, i,j,k;
int b[50];
h = awal;
i = awal;
j = tengah+1;

while((h<=tengah)&&(j<=akhir)){
	if(a[h] < a[j]){
		b[i]=a[h];
		h++;
	}
	else{
		b[i]=a[j];
		j++;
	}
	i++;
	}
	if(h>tengah){
		for(k=j;k<=akhir;k++){
			b[i]=a[k];
			i++;
		}
	}
	else{
		for(k=h;k<=tengah;k++){
			b[i]=a[k];
			i++;
		}
	}
	for(k=awal;k<=akhir;k++) a[k]=b[k];
}

void mergeSort(int awal, int akhir){
int tengah;
if(awal<akhir){
	tengah=(awal+akhir)/2;
	mergeSort(awal,tengah);
	mergeSort(tengah+1,akhir);
	merge(awal,tengah,akhir);
	}
}
