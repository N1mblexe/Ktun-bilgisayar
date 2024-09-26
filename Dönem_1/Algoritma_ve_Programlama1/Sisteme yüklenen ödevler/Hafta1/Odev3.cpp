#include <stdio.h>
#include <conio.h>
//3 adet sayinin ortalamasini bulan program.
int main(){
	int sayi1, sayi2, sayi3, sonuc;
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	printf("3. sayiyi giriniz: ");
	scanf("%d", &sayi3);
	sonuc = (sayi1 + sayi2 + sayi3) / 3;
	printf("Sonuc: %d", sonuc);
}

