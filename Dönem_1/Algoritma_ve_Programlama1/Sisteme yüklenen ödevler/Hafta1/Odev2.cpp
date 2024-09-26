#include <stdio.h>
#include <conio.h>
//Klavyeden girilen 2 sayinin büyüðünü bulan program.
int main(){
	int sayi1, sayi2;
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	if(sayi1>sayi2) {
		printf("Buyuk sayi: %d",sayi1);
	}
	else if(sayi1<sayi2) {
		printf("Buyuk sayi: %d",sayi2);
	}
	else {
		printf("Sayilar esittir.");
	}
}

