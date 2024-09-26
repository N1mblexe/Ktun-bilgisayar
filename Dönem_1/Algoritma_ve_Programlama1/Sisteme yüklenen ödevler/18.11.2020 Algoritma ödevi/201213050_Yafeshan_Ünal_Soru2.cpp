#include<stdio.h>

   int main(){
   	
   	int cifttoplam = 0;
   	int i;
   	int sayi,sayi1;
   	int ortalama;
   	int adet = 0;
   	
   	printf("Lutfen bir sayi degeri giriniz: ");
   	
   	scanf("%d",&sayi);
   	  
	if(sayi <= 0){
		printf("sifirdan buyuk bir sayi giriniz: ");
		scanf("%d",&sayi1);
		
		for(i = 1 ; i < sayi1 ; i++){
   	   	
   	       	if(i % 2 == 0){
   	   		
				cifttoplam += i;
   	   		    adet++;
			}
		}
		printf("Girdiginiz sayiya kadar olan cift sayilarin toplami: %d dir\n",cifttoplam);
			
		ortalama = (cifttoplam / adet);	
		
		printf("Ortalama degeriniz = %d dir",ortalama);	  
    }
	else{
	
	    for(i = 1 ; i < sayi  ; i++){
   	   	
   	       	if(i % 2 == 0){
   	   		
				cifttoplam += i;
   	   		    adet++;
   	   		
   	        }	
   		} 
	     
		 printf("Girdiginiz sayiya kadar olan cift sayilarin toplami: %d dir\n",cifttoplam);
			
		ortalama = (cifttoplam / adet);	
		
		printf("Ortalama degeriniz = %d dir",ortalama);	  
     }  
     return 0;
   }



