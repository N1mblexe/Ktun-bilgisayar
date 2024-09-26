
#include<stdio.h>
struct ogrenci{
	char ad[40];
	char soyad[40];
	int no;
	struct ders {
		int ders_kod;
		int vize;
		int final;
		double gecmenotu;
	}dersbilgi[2];
}ogrencibilgi[2];
int main() {
	int gecmenotu = 0;
	for(int i = 0; i < 3; i++) {
		printf("%d. Ogrencinin Adini Giriniz: ", i+1);
		scanf("%s",&ogrencibilgi[i].ad);
		printf("%d. Ogrencinin Soyadini Giriniz: ", i+1);
		scanf("%s",&ogrencibilgi[i].soyad);
		printf("%d. Ogrencinin Okul Numarasini Giriniz: ", i+1);
		scanf("%d",&ogrencibilgi[i].no);
		
		for(int j = 0; j < 5; j++) {
			printf("%d. Dersin Kodunu Giriniz: ", j+1);
			scanf("%d",&ogrencibilgi[i].dersbilgi[j].ders_kod);
			printf("%d. Dersin Vize Notunu Giriniz: ", j+1);
			scanf("%d",&ogrencibilgi[i].dersbilgi[j].vize);
			printf("%d. Dersin Final Notunu Giriniz: ", j+1);
			scanf("%d",&ogrencibilgi[i].dersbilgi[j].final);
			ogrencibilgi[i].dersbilgi[j].gecmenotu = (double) ((ogrencibilgi[i].dersbilgi[j].vize * 0.4) + (ogrencibilgi[i].dersbilgi[j].final * 0.6));
		}printf("\n");
		
		printf("Ogrenci Adi: %s\nOgrenci Soyadi: %s\nOgrenci Okul No: %d",ogrencibilgi[i].ad,ogrencibilgi[i].soyad,ogrencibilgi[i].no);
		for (int j = 0; j < 5; j++) {
			printf("\n%d. Dersin Ortalamasi: %.2lf", j+1, ogrencibilgi[i].dersbilgi[j].gecmenotu);
		}
	printf("\n\n---------------------------\n\n");
	}
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			gecmenotu = (gecmenotu + ogrencibilgi[j].dersbilgi[i].gecmenotu);
		}
		printf("%d. Dersin Gecme Notu: %d\n", i+1, gecmenotu / 3);
		gecmenotu=0;
	}
}
