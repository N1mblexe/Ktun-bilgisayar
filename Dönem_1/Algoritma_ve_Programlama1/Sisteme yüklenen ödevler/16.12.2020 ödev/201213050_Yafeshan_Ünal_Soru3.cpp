#include<stdio.h>
//kullan�c�n�n klavyeden girdi�i metin i�eridisndeki k���k harfleri b�y�k b�y�kleri k���k yapan programm kodu
     int main(){
     	int i;
     	char metin[100];
     	
     		printf("Metni Giriniz: ");
     		gets(metin);
     		
     		for(i = 0 ; metin[i] != '\0' ; i++){
			 
     		if(metin[i] >= 65 && metin[i] <= 90){
     			
     			metin[i] += 32;
			 }
			 else if (metin[i] >= 97 && metin[i] <= 122){
			 	metin[i] -= 32;
			 	
			 }
			 	printf("%c",metin[i]);
     }
     	
     	return 0;
	 }
