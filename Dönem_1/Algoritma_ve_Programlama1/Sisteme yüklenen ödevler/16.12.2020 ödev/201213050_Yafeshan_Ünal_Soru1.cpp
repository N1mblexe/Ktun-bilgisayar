	#include<stdio.h>
//KUllan�c�dan klavye taraf�ndan girilen metinde ka� kelime oldu�unu bulan program kodu

  int main(){
  		int i = 0;
    	int uzunluk = 1;
    	char metin[100]; 
    printf("Metin Giriniz:",metin[100]);
    gets(metin);
    
    for (i = 0 ; metin[i] != '\0' ; i++){
    	 
    	 if(metin[i] == ' '){
		 
    	 uzunluk++;
		}
		
	}
    printf("Girdiginiz metindeki kelime sayisi: %d",uzunluk);
    	
		
		return 0;
	}

