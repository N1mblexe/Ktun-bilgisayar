#include<stdio.h>
// Kullan�c� taraf�nfan negatif say� girilene kadar olan say�lar� 3 e ve 5 e b�l�nenlerini pointer aritmeti�i ile yeni
// olu�turaca��n�z bir diziye yaz�n�z 

	int main(){
		int sayac=0,dizi[sayac];
		int *ip,*ip1;
		
			
			while(true){
		
				printf("Lutfen 0'dan Buyuk Bir Sayi Giriniz");
				scanf("%d",&dizi[sayac]);
				
					if(dizi[sayac]<0){
					break;
				}
				
					if((*ip)%3==0 && (*ip)%5==0){
					ip1 = dizi;
					}
			sayac++;
			}
			
		return 0;
	}
