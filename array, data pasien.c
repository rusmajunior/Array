#include<stdio.h>
#include<string.h>

struct a {
	char nama[99], alamat[99], gejala[99];
	
}data[3];

main()
{
	
	int i, n;
	printf("Banyak pasien : ");scanf("%d", &n);getchar();
	
	for(i=1; i<=n; i++)
	{
		printf("Pasien %d\n",i);
		printf("Nama Pasien : ");gets(data[i].nama);
		printf("Alamat      : ");gets(data[i].alamat);
		printf("Gejala      : ");gets(data[i].gejala);
	}
	
	printf("Daftar Pasien  : ");
	
	for(i=1; i<=n; i++)
	{
		printf("\n%d. Nama Pasien : %s Alamat : %s Gejala :  %s",  i, data[i].nama, data[i].alamat, data[i].gejala);
	}
}
