#include<stdio.h>

int topla(int n){
	if(n<=1)
		return 1;
	else
		return n + topla(n-1);

	
}


    int main(){
    	int a;
    	printf("Hangi Sayiya Kadar Olan Pozitif Sayilarin Toplamini Istiyorsunuz: ");
    	scanf("%d",&a);
    	while(a<=0){
    		if(a<=0)
    			printf("\nLutfen 0 dan buyuk bir sayi giriniz"); scanf("%d",&a);
		}
    	printf("\n\tGirdiginiz %d Sayisina Kadar Olan Sayilarin Toplami: %d",a,topla(a-1));
    	
    	
    	
    	
    	return 0;
	}
