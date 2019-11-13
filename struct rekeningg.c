#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct rekening
{
	
	
	char nama[25];
	char bank[10];
	char kota[15];
	char provinsi[20];
	char jalan[20];
	char norek[20];
	float saldo;
	struct{
		int tgl;
		int bln;
		int thn;
	}TTL;	
};
typedef struct rekening rek;


int main() 
{
	rek data[10];
	strcpy (data[0].nama,"DIANA");
	strcpy (data[0].bank,"MANDIRI");		
	strcpy (data[0].kota,"BABAT LAMONGAN");
	strcpy (data[0].provinsi,"JAWA TIMUR");
	strcpy (data[0].jalan,"SUNAN KALI JOGO");
	strcpy (data[0].norek,"19090991");
			data[0].TTL.tgl = 9;
			data[0].TTL.bln = 9;
			data[0].TTL.thn = 1999;
			data[0].saldo = 4900000;
	
	
	strcpy (data[1].nama,"MUZA");
	strcpy (data[1].bank,"BCA");		
	strcpy (data[1].kota,"SEMLARAN");
	strcpy (data[1].provinsi,"JAWA BARAT");
	strcpy (data[1].jalan,"SUNAN AMPEL");
	strcpy (data[1].norek,"19090992");
			data[1].TTL.tgl = 20;
			data[1].TTL.bln = 8;
			data[1].TTL.thn = 1972;
			data[1].saldo = 7500000;
	
	strcpy (data[2].nama,"FARABI");
	strcpy (data[2].bank,"BRI");		
	strcpy (data[2].kota,"PATIHAN");
	strcpy (data[2].provinsi,"JAWA TENGAH");
	strcpy (data[2].jalan,"SUNAN DRAJAT");
	strcpy (data[2].norek,"19090993");
			data[2].TTL.tgl = 19;
			data[2].TTL.bln = 6;
			data[2].TTL.thn = 1994;
			data[2].saldo = 8650000;
			
	strcpy (data[3].nama,"MUNA");
	strcpy (data[3].bank,"BCA");		
	strcpy (data[3].kota,"GAJAH INDAH");
	strcpy (data[3].provinsi,"JAWA TIMUR");
	strcpy (data[3].jalan,"SUNAN DRAJAT");
	strcpy (data[3].norek,"19090994");
			data[3].TTL.tgl = 29;
			data[3].TTL.bln = 5;
			data[3].TTL.thn = 1976;
			data[3].saldo = 950000;
			
	strcpy (data[4].nama,"IMAM");
	strcpy (data[4].bank,"BNI");		
	strcpy (data[4].kota,"BOJONEGORO");
	strcpy (data[4].provinsi,"JAWA TIMUR");
	strcpy (data[4].jalan,"AHMAD YANI");
	strcpy (data[4].norek,"19090995");
			data[4].TTL.tgl = 19;
			data[4].TTL.bln = 7;
			data[4].TTL.thn = 1974;
			data[4].saldo = 1150000;
			
	int a,pilih,cari;
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5){
		printf("********************SELAMAT DATANG DI APLIKASI REKENING BANK********************\n\n");
		printf("|=======================================================|\n");
		printf("| PILIHAN ANGKA =                                       |\n");
		printf("|_______________________________________________________|\n");
		printf("| 1. TAMPILKAN SEMUA DATA\t\t\t\t|\n| 2. TAMPILKAN DATA BERDASARKAN REKENING \t\t|\n| 3. TAMPILKAN TOTAL SALDO NASABAH\t\t\t|\n| 4. TAMPILKAN BERDASARKAN UMUR NASABAH\t\t\t|\n| 5. TAMPILKAN NASABAH BERDASARKAN KOTA\t\t\t|\n| 6. CARI SALDO TERBESAR DAN TERKECIL\t\t\t| \n");
		printf("|=======================================================|\n");
		printf("| MASUKAN PILIHAN ANDA =\t\t");
		scanf("%d", &pilih);
		printf("|=======================================================|\n");
		if(pilih == 1){
			printf("\n***********DATA KESELURUHAN DARI NASABAH***********\n");
			for(a = 0; a<5; a++){
				printf("Nama Nasabah			\t: %s\n",data[a].nama);
				printf("Nama Bank				: %s\n",data[a].bank);
				printf("Kota Asala				: %s\n",data[a].kota);
				printf("Provinsi				: %s\n",data[a].provinsi);	
				printf("Jalan Rumah				: %s\n",data[a].jalan);
				printf("Nomor Rekening			\t: %s\n",data[a].norek);
				printf("Tanggal Lahir			\t: %d\n",data[a].TTL.tgl);
				printf("Bulan Lahir				: %d\n",data[a].TTL.bln);
				printf("Tahun Lahir				: %d\n",data[a].TTL.thn);
				printf("Saldo Nasabah			\t: %.2f\n\n\n\n\n",data[a].saldo);
			}
		}
		
		if(pilih == 2) {
			int salah = 0;
			char nomor[20];
			printf("\n************DATA BERDASARKAN REKENING NASABAH************\n\n");
			printf("MASUKAN NOMOR REKENING =  ");
			scanf("%s",&nomor);
			for(a=0;a<5;a++){
				if(!strcmp(data[a].norek,nomor)){
				printf("Nama Nasabah			\t: %s\n",data[a].nama);
				printf("Nama Bank				: %s\n",data[a].bank);
				printf("Kota Asala				: %s\n",data[a].kota);
				printf("Provinsi				: %s\n",data[a].provinsi);	
				printf("Jalan Rumah				: %s\n",data[a].jalan);
				printf("Nomor Rekening			\t: %s\n",data[a].norek);
				printf("Tanggal Lahir			\t: %d\n",data[a].TTL.tgl);
				printf("Bulan Lahir				: %d\n",data[a].TTL.bln);
				printf("Tahun Lahir				: %d\n",data[a].TTL.thn);
				printf("Saldo Nasabah			\t: %.2f\n\n\n\n\n",data[a].saldo);
				salah=1;
				break;
			}
		}
			if (salah==0){
				printf("\nDATA TIDAK ADA\n");
			}
		}
			if (pilih==3){
				printf("\n***************TOTAL SALDO NASABAH*************\n\n");
				float hasil=0;
				
				for(a=0;a<5;a++){
					hasil+=data[a].saldo;
					printf("%2.f\n",data[a].saldo);
				}
				printf("=============================\n");
				printf("%2.f\n\n\n",hasil);
			}
			
			if(pilih==4){
			int umur,tahun,salah=0;
			printf("\n************ Cari Nasabah Brdasarhan Umur **************\n\n");
			printf("Masukan Umur Anda = ");
			scanf("%d",&umur);
			for(a=0;a<5;a++){
			tahun=2019-umur;
				if(tahun==data[a].TTL.thn){
				printf("Nama Nasabah			\t: %s\n",data[a].nama);
				printf("Nama Bank				: %s\n",data[a].bank);
				printf("Kota Asala				: %s\n",data[a].kota);
				printf("Provinsi				: %s\n",data[a].provinsi);	
				printf("Jalan Rumah				: %s\n",data[a].jalan);
				printf("Nomor Rekening			\t: %s\n",data[a].norek);
				printf("Tanggal Lahir			\t: %d\n",data[a].TTL.tgl);
				printf("Bulan Lahir				: %d\n",data[a].TTL.bln);
				printf("Tahun Lahir				: %d\n",data[a].TTL.thn);
				printf("Saldo Nasabah			\t: %.2f\n\n\n\n\n",data[a].saldo);
				salah=1;
				break;
					
		}
	}
		if(salah == 0){
				printf("\nUmur Nasabah Tidak Ditemukan\n\n");
				
		}
	}
	
		if(pilih==5){
			int salah=0;
			char kot[15];
			printf("\n***********Cari Nasabah Berdasarkan Kota****************\n\n");
			printf("Masukan Asal Kota = ");
			scanf("%s",&kot);
			for(a=0;a<5;a++)
			{
			if(!strcmp(data[a].kota,kot)){
				printf("Nama Nasabah			\t: %s\n",data[a].nama);
				printf("Nama Bank				: %s\n",data[a].bank);
				printf("Kota Asala				: %s\n",data[a].kota);
				printf("Provinsi				: %s\n",data[a].provinsi);	
				printf("Jalan Rumah				: %s\n",data[a].jalan);
				printf("Nomor Rekening			\t: %s\n",data[a].norek);
				printf("Tanggal Lahir			\t: %d\n",data[a].TTL.tgl);
				printf("Bulan Lahir				: %d\n",data[a].TTL.bln);
				printf("Tahun Lahir				: %d\n",data[a].TTL.thn);
				printf("Saldo Nasabah			\t: %.2f\n\n\n\n\n",data[a].saldo);
				salah=1;
				break;
				}
		 
			}
		if(salah==0){
			printf("\nData Tidak Ditemukan \n");
		}	
	}	
		
		if(pilih == 6){
			printf("\n***************** Saldo Terbesar Dan Terkecil Nasabah******************\n\n\n");
			float min=0,max=0;
			for(a=0;a<5;a++){
				if(data[a].saldo<min||min==0){
					min = data[a].saldo;
				}
				if (data[a].saldo>max||max==0){
					max = data[a].saldo;
				}
				
			}
			printf("saldo terbesar = %.2f \n",max);
			printf("saldo terkecil = %.2f\n\n\n",min);
			
		}
}


	
	return 0;
}
