#include <stdio.h>
int main(){
	int matriksA[99][99], matriksB[99][99],i,j,m,n;
	
	printf("====Matriks A====\n");
	printf("Input jumlah baris :"); scanf("%d",&m);
	printf("Input jumlah kolom :"); scanf("%d",&n);
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("Input baris %d kolom %d : ",i,j);
			scanf("%d", &matriksA[i][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d \t", matriksA[i][j]);
		}
		printf("\n");
	}
	printf("Transpos Matriks A\n");
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			matriksB[j][i] = matriksA[i][j];
		}
	}
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d \t", matriksB[i][j]);
		}
		printf("\n");
	}
}
