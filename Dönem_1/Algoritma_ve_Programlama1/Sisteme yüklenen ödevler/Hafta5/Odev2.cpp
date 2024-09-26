#include<stdio.h>
#include<conio.h>
int basamak(int sayi) {
	int toplam = 0, kalan, temp;
	temp=sayi;
	while(temp>0) {
		kalan = temp % 10;
		temp = temp / 10;
		toplam = toplam + kalan;
	}
	return toplam;
}
int main() {
	int sayi;
	printf("Lutfen sayi giriniz: ");
	scanf("%d", &sayi);
	printf("Basamaklarin toplami: %d", basamak(sayi) );
}
