#include<stdio.h>
#include<conio.h>
//Klabyeden girilen 100 karakterlþk metnin içindeki harflerin kaç defa geçtiðini bulan kod
  
int main(){
   char metin[100];
   int c = 0, harf[29] = {0}, bharf[29] = {0};
   printf("Lutfen metninizi Giriniz: ");
   gets(metin);
   while (metin[c] != '\0'){
   	if(metin[c] >= 65 && metin[c] <= 90)
   		bharf[metin[c]-65]++;   
      if (metin[c] >= 97 && metin[c] <= 122)
         harf[metin[c]-97]++;
      c++;
   }
    for (c = 0; c < 29; c++){
      if (bharf[c] != 0)
         printf("\t%c karakteri metinde %d defa yeralmistir \n",c+'A',bharf[c]);
   }
   for (c = 0; c < 29; c++){
      if (harf[c] != 0)
         printf("\t%c karakteri metinde %d defa yeralmistir \n",c+'a',harf[c]);
   }
   return 0;
}

