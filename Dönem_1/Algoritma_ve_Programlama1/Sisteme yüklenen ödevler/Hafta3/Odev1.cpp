#include<stdio.h>
#include<conio.h>
int main() {
	while (1) {
	
	int matris1[3][3],matris2[3][3],sonuc[3][3]={};
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			printf("1. Matrisin %d. satirin %d. sayiyi giriniz: ",i+1,j+1);
			scanf("%d", &matris1[i][j]);
		}
	}
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			printf("1. Matrisin %d. satirin %d. sayiyi giriniz: ",i+1,j+1);
			scanf("%d", &matris2[i][j]);
		}
	}
	printf("\iki Matrisin carpimi: \n");
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			for(int k=0;k<3;k++) {
				sonuc[i][j] += matris1[i][k] * matris2[k][j];
			}
			printf("%d ",sonuc[i][j]);
		}
		printf("\n");
	}
}
getch ();
return 0;
}
