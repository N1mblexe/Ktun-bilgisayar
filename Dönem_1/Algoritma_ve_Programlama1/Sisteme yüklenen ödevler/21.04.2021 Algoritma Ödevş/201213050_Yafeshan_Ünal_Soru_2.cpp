#include<stdio.h>
// Kullanıcı tarafınfan negatif sayı girilene kadar olan sayıları 3 e ve 5 e bölünenlerini pointer aritmetiği ile yeni
// oluşturacağınız bir diziye yazınız 

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
