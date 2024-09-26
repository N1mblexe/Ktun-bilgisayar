#include<stdio.h>

   int main(){
   	FILE *file = fopen("sayilar.txt","r");
   	FILE *fp = fopen("sayilar2.txt","w");
   	int dizi[100],flag;
   		if(file == NULL){
     		 	printf("Dosya açma hatasý!\n");
      			return 1;
  			}
   		for(int i = 0 ; i < 100 ; i++){
   			fscanf(file,"%d",&dizi[i]);
   		}
   		for(int a = 0 ; a < 100 ; a++){
   			 for(int j = 2 ; j < dizi[a] ; j++){
				if(dizi[a]%j == 0){
					flag = 1;
					break;
				} 
				else{
					flag = 0;
				}  	  	
			}
			if(flag != 1){
				fprintf(fp,"ASAL SAYILAR:%d\n",dizi[a]);
			}
			else{
				fprintf(fp,"ASAL OLMAYAN SAYILAR:%d\n",dizi[a]);
			}
			
   		}
   		fclose(file);
		fclose(fp);
   	
   	return 0;
   }
