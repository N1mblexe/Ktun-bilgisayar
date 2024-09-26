#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

	int main(){
		int array[100],temp,i,j,m,n,k,x;
		//SAYILARI ATAMA
			srand(time(NULL));
			for(j=0;j<100;j++){
			array[j]= rand()%100;	
			}
			for(i=0;i<100;i++){
				printf("%d.Sayi--->%d\n",i,array[i]);
			}
		
		//SELECTÝON SORT ÝLE BÜYÜKTEN KÜÇÜÐE SIRALAMA
			for(m=0;m<50;m++){
				for(n=0;n<50;n++){
					if(array[n]<array[m]){
						temp = array[n];
						array[n] = array[m];
						array[m] = temp;
						
					}
				}
			}
			for(int l=0;l<50;l++){
				printf("\tBuyukten Kucuge %d.sayi:%d\n",l+1,array[l]);
			}
			
		//ÝNSECTÝON SERT ÝLE KÜÇÜKTEN BÜYÜÐE SIRALAMA	
			for (i = 50; i < 100; i++){
			    temp = array[i];
			    j = i-1;
			 	while (j >= 0 && array[j] > temp){
			        array[j+1] = array[j];
			        j = j-1;
			       }
			       array[j+1] = temp;
			   }
			
			for(int a=50;a<100;a++){
				printf("\t\tKucukten Buyuge %d.Sayi:%d\n",a,array[a]);
			}
	
		
			
		return 0;
	}
