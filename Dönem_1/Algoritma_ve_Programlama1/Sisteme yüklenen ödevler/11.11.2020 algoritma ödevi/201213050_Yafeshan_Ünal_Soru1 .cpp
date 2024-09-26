#include<stdio.h>

      
      int main(){
      int sayi1;
      int sayi2;
      int toplam;
      int cikarma;
      int carpim;
      float bolum;
   
          
          printf("Lutfen Birinci Sayiyi Giriniz:");
          scanf("%d",&sayi1);
          printf("Lutfen Ýkinci Sayiyi giriniz:");
          scanf("%d",&sayi2);
          
         toplam = sayi1 + sayi2;
         cikarma = sayi1 - sayi2;
         carpim = sayi1 * sayi2;
         bolum = (float)sayi1/(float)sayi2;
             printf("toplam %d\n",toplam);     
             printf("cikarma %d\n",cikarma);
             printf("carpim %d\n",carpim);
             printf("bolum:%2.f",sayi1,sayi2,bolum);	
			
             
         
          


          return 0;
}
