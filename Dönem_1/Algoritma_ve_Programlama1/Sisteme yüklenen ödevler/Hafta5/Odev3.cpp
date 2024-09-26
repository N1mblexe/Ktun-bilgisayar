#include<stdio.h>
#include<conio.h>
void asalkontrol(int sayi) {
	int kontrol = 0;
	if(sayi==1) {
			printf("Sayi asal degildir!");
	}
	else {
		if(sayi > 1) {
			for(int i = 2; i < sayi; i++) {
				if(sayi%i == 0) {
					kontrol = 1;
					break;
				}
			}
			if(kontrol == 0) {
				printf("Asaldir!");
			}
			else {
				printf("Asal degil!");
			}
		}
		else {
		printf("Lütfen pozitif bir sayi giriniz!");
		}
	}
}
int main() {
	int sayi;
	printf("Lutfen sayi giriniz: ");
	scanf("%d", &sayi);
	asalkontrol(sayi);
}
