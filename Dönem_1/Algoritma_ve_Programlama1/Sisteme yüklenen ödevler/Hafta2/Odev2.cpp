#include<stdio.h>
#include<conio.h>

int main() {
	int sayi,i,toplam=0,adet=0,ortalama;
	printf("Kaca kadar saysin? ");
	scanf("%d", &sayi);
	for(i=0;i<=sayi;i=i+2) {
		toplam = toplam + i;
		adet = adet + 1;
	}
	ortalama = toplam / adet;
	printf("%d'e kadar olan cift sayilarin toplami= %d\n%d'e kadar olan cift sayilarin ortalamasi= %d",sayi,toplam,sayi,ortalama);
}
