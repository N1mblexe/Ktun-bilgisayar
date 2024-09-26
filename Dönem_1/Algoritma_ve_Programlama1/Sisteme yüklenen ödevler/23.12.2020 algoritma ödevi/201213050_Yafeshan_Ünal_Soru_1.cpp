#include<stdio.h>
//Kullanýcý tarafýndan girilen n ve r deðerleri ile n nin r li kombinasynunu hesaplayan program kodu

int fact(int sayi){
	if(sayi <= 1){
		return sayi;
	}
	return fact(sayi-1)*sayi;
}
   int main(){
   	int n,r;
   		printf("Kombinasyonu Hesapalanacak 1.sayiyi giriniz: ");
   		scanf("%d",&n);
   		printf("Kombinasyonu Hesapalanacak 2.sayiyi giriniz: ");
   		scanf("%d",&r);	
   		
   	printf("%d",fact(n)/(fact(r)*fact(n-r)));
   	
   	return 0;
   }
