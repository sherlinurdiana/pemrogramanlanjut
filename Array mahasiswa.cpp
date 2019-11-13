#include <stdio.h>
#include <conio.h>

int main() {
	int d, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3){
		int npm[5] = {1801,1802,1803,1804,1805};
		float ipk[5] = {3.56,3.2,4.00,2.90,3.76};
	
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan data dari kecil ke terbesar \n2. Tampilkan data dari terbesar ke terkecil \n3. Cari data yang dibutuhkan\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("Data Mahasiswa : \n\n");
			for(d = 0; d<5; d++){
				printf("Npm : %d\n", npm[d]);
				printf("ipk : %f\n\n", ipk[d]);
			}
			
		} else if (pilih == 2){
			printf("Data Mahasiswa : \n\n");
			for(d = 4 ; d>=0; d--){
				printf("Npm : %d\n", npm[d]);
				printf("ipk : %f\n\n", ipk[d]);	
		}	
		
		} else if (pilih == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(d = 0; d<5; d++){
				if(npm[d] != cari){
					printf("Npm : %d\n", npm[d]);
					printf("ipk : %f\n\n", ipk[d]);
					break;
				}
			}			
		} else {
			
			printf("Inputan Salah");
	}
	}
	
	return 0;
}
