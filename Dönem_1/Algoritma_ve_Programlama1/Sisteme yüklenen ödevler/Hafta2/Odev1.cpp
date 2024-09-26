#include<stdio.h>
#include<conio.h>

int main() {
	int vize,final,but;
	float sonuc;
	printf("Vize notunuzu giriniz: ");
	scanf("%d",&vize);
	printf("Final notunuzu giriniz: ");
	scanf("%d",&final);
	sonuc = (float) (vize * 0.4) + (final * 0.6);
	if(sonuc>=0 && sonuc<=60) {
		printf("Ortalamaniz: %.2f\nButunlemeye kaldiniz.\nButunleme notu giriniz: ",sonuc);
		scanf("%d",&but);
		sonuc = (float)(vize * 0.4) + (but * 0.6);
		if (sonuc<=60) {
			printf("Kaldiniz! Ortalamaniz: %.2f", sonuc);
		}
		else {
			printf("Gectiniz! Ortalamaniz: %.2f", sonuc);
		}
	}
	else if(sonuc>=61) {
		printf("Gectiniz! Ortalamaniz: %.2f", sonuc);
	}
	else {
		printf("Yanlis Not Girdiniz.");
	}
}
