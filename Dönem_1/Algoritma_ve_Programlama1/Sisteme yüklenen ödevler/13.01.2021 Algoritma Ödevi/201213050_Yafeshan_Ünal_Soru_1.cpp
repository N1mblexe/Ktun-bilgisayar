#include<stdio.h>

    int main(){
    	int sayi,i,kontrol,j;
    		while(sayi <= 0){
    			printf("Lutfen 0 dan Buyuk Bir Sayi Giriniz:");
    			scanf("%d",&sayi);
    		}
    		if(sayi == 1)
				sayi++;
				while(i<10){
					for(j = 1 ; j < sayi ; j++){
						if(sayi % j == 0){
							kontrol = 1;
							sayi++;
						}
						
					}
						if(kontrol == 1)
					printf("%d\n",sayi);
				i++;
					}
				
		
			
		return 0;
	}
