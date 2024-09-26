#include<stdio.h>
#include<time.h>
#include<stdlib.h>
 
	int main(){
		FILE *fp = fopen("sayi.txt","r+");
		int i,dizi[100],*ip,*ip1;
		srand(time(0));
		for(i=0;i<100;i++){
			dizi[i] = rand() %100;
			if(dizi[i] & (1<<5)){
			
		}
			else{
			ip1 = dizi;
			printf("5.Biti 0 Olanlar:%d\n",ip1[i]);
			}
			fprintf(fp,"%d\n",dizi[i]);
		}
		
	
		
	
		fclose(fp);
		
		return 0;
	}
