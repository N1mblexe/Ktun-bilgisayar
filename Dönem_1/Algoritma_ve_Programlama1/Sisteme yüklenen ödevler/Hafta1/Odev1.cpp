#include <stdio.h>
#include <conio.h>
//Klavyeden girilen 2 sayi için 4 iþlem yapan program.
int main(){
	int sayi1, sayi2;
	printf("1. sayiyi giriniz: "); 
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: "); 
	scanf("%d", &sayi2);
	int toplama = sayi1 + sayi2;
	int cikarma = sayi1 - sayi2;
	int carpma = sayi1 * sayi2;
	float bolme = sayi1 / sayi2;
	printf("Toplama: %d\nCikarma: %d\nCarpma: %d\nBolme: %.2f", toplama,cikarma,carpma,bolme);
}
