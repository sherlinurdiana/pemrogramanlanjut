#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float skor (int tugas,int uts,int uas);
void matkul (float skor, int sks, char *abjad, int *point, int *jumlah);

typedef struct
{
    char NamaMhs[32],NamaMK[32],abjad;
    int NMK,tugas,uts,uas,point,sks,jml,ttal_sks,ttal_jml;
    float skor,IP;
}mahasiswa;

main()
{
    int x,y,Nmahs,LOOP;
    char yn;
    mahasiswa Mhs[32][12];
    y=1;
    printf("***********************************\n");
    printf("Masukkan Berapa banyak mahasiswa : ");
    printf("\n***********************************\n");
    scanf("%d",&Nmahs);
     fflush(stdin);
    for(x=1;x<=Nmahs;x++)
    {
        printf("\nMasukkan Nama Mahasiswa ke-%d: ",x);
        gets(Mhs[x][0].NamaMhs);
        y=1;
        Mhs[x][0].NMK=1;
        Mhs[x][0].ttal_sks=0;
        Mhs[x][0].ttal_jml=0;
        LOOP:
        printf("--------------------\n");
        printf("Masukkan Nama Matkul ke-%d : ",y);
		gets(Mhs[x][y].NamaMK);
        printf("Masukkan Nilai Matkul %s\n",Mhs[x][y].NamaMK);
        printf("----Tugas : ");
		scanf("%d", &Mhs[x][y].tugas);
        printf("----UTS   : ");
		scanf("%d", &Mhs[x][y].uts);
        printf("----UAS   : ");
		scanf("%d", &Mhs[x][y].uas);
        printf("Masukkan Jumlah SKS Matkul %s : ",Mhs[x][y].NamaMK);
		scanf("%d", &Mhs[x][y].sks);
        fflush(stdin);
        Mhs[x][y].skor=skor(Mhs[x][y].tugas, Mhs[x][y].uts, Mhs[x][y].uas);
        matkul(Mhs[x][y].skor, Mhs[x][y].sks, &Mhs[x][y].abjad, &Mhs[x][y].point, &Mhs[x][y].jml);
        Mhs[x][0].ttal_sks+=Mhs[x][y].sks;
        Mhs[x][0].ttal_jml+=Mhs[x][y].jml;
        printf("Apakah anda mau menambahkan matkul lainnya (Y/N) : ");
        scanf("%c",&yn);
        if (yn == 'Y'|| yn == 'y'){
		fflush(stdin);y++; Mhs[x][0].NMK++; goto LOOP;
		}
        Mhs[x][0].IP=Mhs[x][0].ttal_jml/Mhs[x][0].ttal_sks;
        fflush(stdin);
    }
    system("cls");
    for(x=1;x<=Nmahs;x++)
    {
        y=1;
        printf("********************\n");
        printf("%s\n",Mhs[x][0].NamaMhs);
        printf("********************\n");
        printf("+====+================+=======+=======+=====+========+\n");
        printf("| No |    Mata kuliah | Abjad | Point | SKS | Jumlah |\n");
        printf("+====+================+=======+=======+=====+========+\n");
        for(y=1;y<=Mhs[x][0].NMK;y++)
        {
            printf("| %02d | %14s | %3c   | %3d   | %2d  | %4d   |\n",y, Mhs[x][y].NamaMK, Mhs[x][y].abjad,
                   Mhs[x][y].point, Mhs[x][y].sks, Mhs[x][y].jml);
        }
        printf("+====+================+=======+=======+=====+========+\n");
        printf("| Total =                             | %2d  | %4d   |\n",Mhs[x][0].ttal_sks,Mhs[x][0].ttal_jml);
        printf("+=====================+=====+========================+\n");
        printf("     Index Prestasi : %4f",Mhs[x][0].IP);
        printf("\n\n");
    }
}

float skor (int tugas,int uts,int uas)
{
    return tugas*0.25 + uts*0.3 + uas*0.45;
}
 void matkul (float skor, int sks, char *abjad, int *point, int *jumlah)
{
    if (skor >= 85)
    {
        *abjad='A';
        *point=4;
    }
    else if (skor >=71 && skor <85)
    {
        *abjad='B';
        *point=3;
    }
    else if (skor >=56 && skor <71)
    {
        *abjad='C';
        *point=2;
    }
    else if (skor >=45 && skor < 56)
    {
        *abjad='D';
        *point=1;
    }
    else if (skor <45)
    {
        *abjad='E';
        *point=0;
    }
    *jumlah=*point*sks;
}


