#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
	double i,geometrik;
	float aritmatik=0,aritmatiktoplam;
	int sayi,sonuclar=1,teksayi=0,ciftsayi=0;
	for(i=1;i<=10;i++){
		printf("%.lf. sayiyi giriniz.",i);
		scanf("%d", &sayi);
		if(sayi%2==0) {
			sonuclar = sonuclar*sayi;
			ciftsayi++;
			geometrik=pow(sonuclar,1/i);
		}
		else{
			aritmatik = (float)aritmatik + sayi;	
			teksayi++;
		}
	}
	aritmatiktoplam = aritmatik / teksayi;
	printf("Geometrik Ortalama: %.2lf\n",geometrik);
	printf("Aritmatik Ortalama: %.2f", aritmatiktoplam);
}
