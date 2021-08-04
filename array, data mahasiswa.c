#include<stdio.h>
#include<string.h>

struct a {
	char nama[99], nim[99], jurusan[99];
	
}data[3];

main()
{
	
	int i, n;
	printf("Banyak Mahasiswa : ");scanf("%d", &n);getchar();
	
	for(i=1; i<=n; i++)
	{
		printf("Mahasiswa %d\n",i);
		printf("Nama Mahasiswa : ");gets(data[i].nama);
		printf("NIM            : ");gets(data[i].nim);
		printf("Jurusan        : ");gets(data[i].jurusan);
	}
	
	printf("Daftar mahasiswa yang ikut responsi : ");
	
	for(i=1; i<=n; i++)
	{
		printf("\n %d. %s (%s) %s",  i, data[i].nama, data[i].nim , data[i].jurusan);
	}
}
