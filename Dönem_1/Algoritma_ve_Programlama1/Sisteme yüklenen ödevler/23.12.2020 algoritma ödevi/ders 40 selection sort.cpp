#include<stdio.h>
#define MAX  50
void selectionsort(int dizi[],int size){
	int i,j,minindex,temp;
		
	for(i = 0 ; i < size ; i++){
			minindex=i;
		
		for(j = i ; j < size ; j++){
			if(dizi[j] < dizi[minindex]){
				minindex =j;
			}
		}	
			 temp = dizi[i];
			dizi[i] = dizi[minindex];
			dizi[minindex] = temp;
	}
}

    int main(){
    	int array[MAX];
    	int size,i;
    	printf("Eleman Sayisi:");
    	scanf("%d",&size);
    		for(i = 0 ; i < size ; i++){
    			scanf("%d",&array[i]);
			}
    	selectionsort(array,size);
    		for(i = 0 ; i < size ; i++){
    			printf("%d ",array[i]);
			}
    	
    	
    	
    	
    	return 0;
	}
