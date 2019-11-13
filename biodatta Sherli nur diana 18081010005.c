#include <stdio.h>
#include<stdlib.h>


int main()
{
//	system("color 4");
	
	printf("\n");
	printf("\t\t\t BIODATTA MAHASISWA\n");
	
	int a;
	int b;
	for(a=1;a<=60;a++){
		printf("*");
	}
	printf("\n\n");
	
	char nama [30],NPM[20],TTL[30],Jenis_kelamin[10],Golongan_Darah[10],Alamat[40],Pekerjaan[20], Hobi[20],Agama[20],
	Bahasa[10],Kewarganegaraan[10],Cita_Cita[20],Email[30],Riwayat_pendidikan[50];
	
	strcpy(nama,"SHERLI NUR DIANA ");
	printf("nama\t\t\t:  %s \n",nama);
	
	strcpy(NPM,"18081010005");
	printf("NPM\t\t\t: %s \n",NPM);
	
	strcpy(TTL,"BOJONEGORO, 09,SEPETMBER");
	printf("TTL\t\t\t: %s \n " ,TTL);
	
	strcpy(Jenis_kelamin,"PEREMPUAN");
	printf("Jenis Kelamin\t\t:  %s \n ",Jenis_kelamin);
	
	strcpy(Golongan_Darah,"B");
	printf("Golongan Darah\t\t: %s \n",Golongan_Darah);
	
	strcpy(Alamat,"BABAT,LAMONGAN,JAWA TIMUR");
	printf("Alamat\t\t\t: %s \n",Alamat);
	
	strcpy(Pekerjaan,"PELAJAR/MAHASISWA");
	printf("Pekerjaan\t\t: %s \n",Pekerjaan);
	
	strcpy(Hobi,"1.Membaca \n \t\t\t  2.Memasak");
	printf("Hobi\t\t\t: %s \n",Hobi);
	
	strcpy(Agama,"ISLAM");
	printf("Agama\t\t\t: %s \n",Agama);
	
	strcpy(Cita_Cita,"1.GURU \n \t\t\t  2.Koki");
	printf("Cita cita\t\t: %s \n",Cita_Cita);
	
	strcpy(Bahasa,"1.Jawa\n \t\t\t    2.Indonesia ");
	printf("Bahasa\t\t\t:   %s \n",Bahasa);
	
	strcpy(Kewarganegaraan,"Indonesia");
	printf("Kewarganegaraan\t\t: %s \n",Kewarganegaraan);
	
	strcpy(Email,"dianasherli99@gmail.com ");
	printf("Email\t\t\t:   %s \n\n",Email);
	
	strcpy(Riwayat_pendidikan,"1.SDN BANARAN 1 BABAT (2006-2012) \n \t\t\t  2.SMPN 3 BABAT (2012-2015) \n \t\t\t  3.SMA MUHAMMADIYAH 1 BABAT (2015-2018) \n \t\t\t  4.UPN V JATIM(2018-NOW) ");
	printf("Riwayat Pendidikan\t:  %s \n\n",Riwayat_pendidikan);
	
	
	for(b=1;b<=60;b++){
		printf("*");
	}
	
	
	return 0;
}
