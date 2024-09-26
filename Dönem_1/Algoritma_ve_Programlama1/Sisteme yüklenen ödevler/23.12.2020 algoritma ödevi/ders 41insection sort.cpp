#include<stdio.h>
void insectionsort(int array[],int size){
	int i,j,temp;
	for(i = 1 ; i < size ; i++){
			temp = array[i];
			j=i-1;
		
		while(j >= 0 && array[j] > temp){
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = temp;
	
	}
}
     int main(){
     	int dizi[5];
     	int i,j,size;
     	printf("Kac Elemanli: ");
     	scanf("%d",&size);
     	
     		for(i = 0 ; i < size ; i++){
     			scanf("%d",&dizi[i]);
			 }
			 insectionsort(dizi,size);
     		for(i = 0 ; i < size ; i++){
     			printf("%d ",dizi[i]);
			 }
     	
     	
     	
     	return 0;
	 }
