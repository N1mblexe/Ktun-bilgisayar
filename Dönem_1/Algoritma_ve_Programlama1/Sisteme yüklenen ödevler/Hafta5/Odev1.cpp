#include<stdio.h>
#include<conio.h>
float faktoriyel(int sayi) {
	float toplam = 1;
	for(int i = 1; i <= sayi; i++) {
		toplam = toplam * i;
	}
	return toplam;
}
int denklem(int sayi1, int sayi2) {
	int sonuc = faktoriyel(sayi1)/(faktoriyel(sayi2)*faktoriyel(sayi1 - sayi2));
	return sonuc;
}
int main() {
	int sayi1, sayi2;
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	printf("%d", denklem(sayi1, sayi2));
}
