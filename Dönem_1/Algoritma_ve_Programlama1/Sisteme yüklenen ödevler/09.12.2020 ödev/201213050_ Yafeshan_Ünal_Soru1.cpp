#include<stdio.h>


//kullanýcý tarafýndan girilen 20 adet sayýyý dizinin içine yerleþtirecek ve çift olan elemanlarýn toplamýný dizinin en büyük deðerli elemanýna bölereek sonucu bulan programm kodu

    int main(){
    	
    	int dizi[20];
    	
		int i,j,cifttoplam = 0;
		int enbuyuk;
		float sonuc;
		for(i = 0 ; i < 20 ; i++){
			
			
			printf("Dizinin %d. elemanini giriniz:",i+1);
			scanf("%d",&dizi[i]);
				if(dizi[i] % 2 == 0){
					
			    cifttoplam += dizi[i];
			}
		}
		printf("\n\n\n");
		
		enbuyuk = dizi[0];
		for(j = 0 ; j < 20 ; j++){
			
			if(enbuyuk < dizi[j]){
		
				enbuyuk = dizi[j];
			}
		}
		
			printf("cifttoplam :%d\n\n",cifttoplam);
			printf("En buyuk :%d\n\n",enbuyuk);
	
		sonuc = (float)cifttoplam/enbuyuk;
		
			printf("sonuc : %2.f",sonuc);
				
	return 0;
	}
