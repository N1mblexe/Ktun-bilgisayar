#include<stdio.h>
//Kendisine paranetere olarak gelen tamsayýnýn basamak toplamýný bulan program kodu
int basamaktopla(int sayi){
	
	int rakam,toplam=0;
 
		while(sayi){
			rakam=sayi%10;
			sayi=sayi/10;
			toplam+=rakam;
			for(int i = 0 ; i < 5 ; i++){
				scanf("%d",sayi[i])
			}
		}
 printf("Girilen Sayinin Rakamlari Toplami: %d\n",toplam);
	return sayi;
}	
	int main(){
		int x;
		printf("Lutfen Bir Sayi Giriniz: ");		
		scanf("%d",&x);
		basamaktopla(x);
		return 0;
	}
