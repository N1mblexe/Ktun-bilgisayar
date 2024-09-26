#include <stdio.h>

int main(){
	char metin[100];
	char kelime[20];
	int i=0,j,kontrol=0,sayac;
	int a=0,b=0,uzunluk=0;
	
	printf("( Metini . ile bitiriniz)\n");
	printf("Metninizi giriniz:");
	gets(metin);
	printf("Bulumacak Kelimeyi giriniz:");
	gets(kelime);
	for(int a=0;kelime[a]!='\0';a++){
		uzunluk++;
	}
	for(; metin[i]!='\0' ; i++){
			j=0;
			b++;
			if(metin[i]==kelime[j]){
				while(metin[i+j] == kelime[j])
				j++;
					if(kelime[j]=='\0'){
						sayac++;
						kontrol=1; 
					}	 
			}
		if(metin[i]== '\0');
		if(kontrol == 1){
				printf("Girdiginiz kelime metinin %d. satirdan %d. satirina kadar bulunmaktadir",b,b+uzunluk);
				break;
		}
	kontrol == 0;	
	}
			if(sayac == 0)
				printf("Girdiginiz Kelime Metinde Bulunmamaktadir");	
return 0;
}
