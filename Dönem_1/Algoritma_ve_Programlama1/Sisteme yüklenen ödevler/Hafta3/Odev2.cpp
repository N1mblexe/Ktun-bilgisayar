#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int asalKontrol(int);
int main() {
	srand(time(NULL));
	int matris[10][10];
	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++) { 
			matris[i][j] = rand()%100;
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------\n");
	printf("\nMatristeki Asal Sayilar: \n");
	int kontrol=0,toplam=0;
	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++) {
			for(int m=matris[i][j];m<=matris[i][j];m++){
	            kontrol=0;
	            for(int n=2;n<=m/2;n++){
	                if(m%n==0){
	                    kontrol=1;
	                    break;
	                }
	            }
	            if(kontrol==0 &&m>=2){ 
	                printf("%dx%dn>> %d\n",i,j,m);
	                toplam=toplam+m;
	            }   
	        }
		}
	}
	printf("\nAsal Sayilarin Toplami: %d",toplam);
}
