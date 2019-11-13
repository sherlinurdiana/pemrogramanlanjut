#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
            int angka[5], a,b,k,temp,rendah,tinggi,rumus,tm;
            printf("  ++++++++++ Interpolation Search ++++++++++++++ \n\n");
            for(a=0;a<5;a++)
            {
            
            printf("data ke-%d : ",a+1);
            scanf("%d",&angka[a]);
            }
            
            printf("\n Masukkan data yang akan anda cari : ");
            scanf("%d",&k);
            for(a=0;a<5;a++){
                for(b=a+1;b<5;b++){
                if (angka[a]>angka[b]){
                temp=angka[a];
				angka[a]=angka[b]; 
				angka[b]=temp;
                    }
                }
            }
            tm=0;
            tinggi=4;
			rendah=0;
			  do
            {
            	rumus = ((k - angka[rendah]) / (angka[tinggi] - angka[rendah]))*(tinggi-rendah) +  rendah;
                    if (angka[rumus] == k){
                       tm++;
                        break;
                    }
                    if (angka[rumus] > k)
                        tinggi = rumus-1;
                    else if (angka[rumus] < k)
                        rendah = rumus + 1;
            }
            while(k >= angka[rendah] && k <= angka[tinggi]);
                if (tm>0){
                    printf(" data %d yang dicari ada dalam array \n",k);
                    printf(" ===================================");
                }else
					{
                    printf("data tidak ditemukan dalam array = \n");
                    printf(" ===================================");
					}
         //  getchar();     
	return 0;
}
