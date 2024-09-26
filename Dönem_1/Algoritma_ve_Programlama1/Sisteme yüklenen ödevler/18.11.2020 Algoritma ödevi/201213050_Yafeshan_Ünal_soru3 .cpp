#include<stdio.h>
#include<math.h>

 int main(){
 	
 	int sayi;
 	int i;
 	int tektoplam = 0;
 	double ciftcarpim = 1;
 	int teksayac = 0;
 	double ciftsayac = 0;
 	float aritmetikortalama;
 	float geometrikortalama;
 	
 	
    for (i = 0 ; i < 4 ; i++){
       	
       	   printf("Lutfen 4 adet sayi giriniz: ",sayi);
           scanf("%d",&sayi);
       	
       	if(sayi % 2 == 0){
       		
       		ciftcarpim *= sayi;
       		ciftsayac++;
       		geometrikortalama = pow (ciftcarpim,1/ciftsayac);
        }
       	
		else {
			
		   (sayi % 2 == 1);
		   tektoplam +=sayi;
		   teksayac++;  
		   aritmetikortalama = tektoplam / teksayac;
	    }
    }
           printf("Aritmetik ortalama: %2.f dir\n",aritmetikortalama);
           printf("Geometik ortalama: %f dir",geometrikortalama);
       
         return 0;
 }
 
 
