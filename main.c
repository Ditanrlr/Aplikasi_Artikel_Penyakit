#include "header.h"
int main()
{
	char nama [25];
	char program_studi [20];
	int nim;
	int pilihan,menu1,menu2,menu3,menu4,penilaian, ulang;
	printf("Silahkan masukkan nama anda\n");
	printf("\3 ");gets (nama);
	printf("\nSilahkan masukkan program studi anda\n");
	printf("\3 ");gets (program_studi);
	printf("\nMasukkan NIM anda\n");
	printf("\3 ");scanf("%d",&nim);
	printf("\n\n");
	do{
	printf("APLIKASI ARTIKEL PENYAKIT\n");
	printf("1. CORONA VIRUS (COVID-19)\n");
	printf("2. DEMAM BERDARAH\n");
	printf("3. FLU BURUNG\n");
	printf("4. MALARIA\n");
	printf("silahkan pilih artikel yang ingin anda baca :");
	scanf ("%i",&pilihan);
	switch (pilihan)
	{
	case 1:
	printf("Daftar menu pilihan\n");
	printf("1. pengertian covid-19\n");
	printf("2. Gejala umum dari penyakit covid-19\n");
	printf("3. Cara mencegah terkena covid-19\n");
	printf("4. Cara Penularan covid-19\n");
	printf("5. 10 kota yang paling banyak terkena covid-19\n");
	printf("Pilihan anda :");scanf("%i",&menu1);
	switch (menu1)
	{
		case 1:
		pengertian_covid_19();
		break;
		case 2:
		gejala_umum_dari_penyakit_covid_19();
		break;
		case 3:
		cara_mencegah_terkena_covid_19();
		break;
		case 4:
		cara_Penularan_covid_19();
		break;
		case 5:
		sepuluh_kota_yang_paling_banyak_terkena_covid_19 ();
		break;
		}
		break;
		case 2:
		printf ("Daftar menu pilihan\n");
		printf ("1. Pengertian Demam Berdarah\n");
		printf ("2. Gejala Demam Berdarah\n");
		printf ("3. Penyebab Demam Berdarah\n");
		printf ("4. Pencegahan Demam Berdarah\n");
		printf ("5. Pengobatan Demam Berdarah\n");
		printf ("Masukkan pilihan anda: "); scanf ("%i",&menu2);
		printf ("---------------------------------------\n");
		switch (menu2)
		{
		case 1:
		pengertian_demam_berdarah ();
		break;
		case 2:
		gejala_demam_berdarah ();
		break;
		case 3:
		penyebab_demam_berdarah ();
		break;
		case 4:
		pencegahan_demam_berdarah ();
		break;
		case 5:
		 pengobatan_demam_berdarah ();
		break;
		}
		break;
		case 3:
		printf ("Daftar menu pilihan\n");
		printf ("1. Pengertian Flu Burung\n");
		printf ("2. Gejala Flu Burung\n");
		printf ("3. Penyebab Flu Burung\n");
		printf ("4. Cara Mencegah Flu Burung\n");
		printf ("5. Pengobatan Flu Burung\n");
		printf ("Masukkan pilihan anda: "); scanf ("%i",&menu3);
		printf ("---------------------------------------\n");
		switch (menu3)
		{
		case 1:
		pengertian_flu_burung ();
		break;
		case 2:
		gejala_flu_burung ();
		break;
		case 3:
		penyebab_flu_burung ();
		break;
		case 4:
		cara_mencegah_flu_burung ();
		break;
		case 5:
		pengobatan_flu_burung ();
		break;
		}	
		break;
		case 4:
		printf ("Daftar menu pilihan\n");
		printf ("1. Pengertian Malaria\n");
		printf ("2. Gejala Malaria\n");
		printf ("3. Penyebab Malaria\n");
		printf ("4. Pencegahan Malaria\n");
		printf ("5. Pengobatan Malaria\n");
		printf ("Masukkan pilihan anda: "); scanf ("%i",&menu3);
		printf ("---------------------------------------\n");
		switch (menu4)
		{
		case 1:
		pengertian_malaria();
		break;
		case 2:
		gejala_malaria();
		break;
		case 3:
		penyebab_malaria();
		break;
		case 4:
		pencegah_malaria();
		break;
		case 5:
		pengobatan_malaria();
		break;
		}
}
	printf ("PENILAIAN\n");
	printf("1. Kurang puas\n2. Puas\n3. Sangat Puas\n");
	printf("Berikan Penilaian Anda: "); scanf ("%i",&penilaian);
	printf ("\n\nApakah ingin melanjutkan? Tekan 1 sebagai YA. 2 sebagai TIDAK: "); scanf ("%i",&ulang);
}
while (ulang == 1);
}



