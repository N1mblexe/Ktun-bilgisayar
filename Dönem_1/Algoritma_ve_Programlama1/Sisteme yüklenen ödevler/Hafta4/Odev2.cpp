#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char cumle[100],kelime[30];
	int kontrol = 1, k, sonindex,kelimekontrol=0;
	printf("bir cumle giriniz: ");
	gets(cumle);
	printf("Aramak istediginiz kelimeyi giriniz: ");
	gets(kelime);
	for (int i = 0; cumle[i] != '\0'; i++) {
		if (cumle[i] == kelime[0]) {
			kontrol = 1;	
			k = i;
			kelimekontrol = 0;
			for (int j = 0; cumle[i] != '\0' ; j++) {
				if (cumle[k] == kelime[j]) {
					kelimekontrol++;
				}	
				sonindex = i + j;
				k++;
			}
			if(strlen(kelime)==kelimekontrol) {
				kontrol = 1;
				printf("%d. indexten basliyor! %d. indexte bitiyor!\n", i, sonindex);
				break;
			}
		}
	}
	if(strlen(kelime)!=kelimekontrol && kontrol == 1	) {
		printf("Metin icinde aranan kelime bulunamadi!");
	}

	return 0;
}

