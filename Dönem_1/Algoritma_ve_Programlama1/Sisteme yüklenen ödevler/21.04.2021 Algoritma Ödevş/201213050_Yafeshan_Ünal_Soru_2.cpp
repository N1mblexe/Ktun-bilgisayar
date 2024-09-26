#include<stdio.h>
// Kullanýcý tarafýnfan negatif sayý girilene kadar olan sayýlarý 3 e ve 5 e bölünenlerini pointer aritmetiði ile yeni
// oluþturacaðýnýz bir diziye yazýnýz 

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
