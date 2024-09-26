#include<conio.h>
#include<stdio.h>
struct isci{
	char adi[20];
	char soyadi[20];
	int yas;
	double aylikucret;
}iscibilgileri;
struct isci verial(struct isci iscibilgileri){
	struct isci kisi;
	printf("Adinizi Giriniz: ");
	gets(kisi.adi);
	printf("Soyadinizi Giriniz: ");
	gets(kisi.soyadi);
	printf("Yas Giriniz: ");
	scanf("%d", &kisi.yas);
	printf("Aylik Ucret Giriniz: ");
	scanf("%lf", &kisi.aylikucret);
	return kisi;
};
int main() {
	struct isci kisi;
	kisi = verial(kisi);
	printf( "Adi: %s\n", kisi.adi);
	printf( "Soyadi: %s\n", kisi.soyadi);
	printf( "Yas: %d\n", kisi.yas);
	printf( "Aylik Ucret: %.2lf\n", kisi.aylikucret);
}
