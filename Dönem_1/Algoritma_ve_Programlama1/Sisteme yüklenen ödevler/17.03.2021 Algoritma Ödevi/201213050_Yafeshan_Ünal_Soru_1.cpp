#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct program{
		char sehir[10];
		int plaka;
}kaydet;	
    int main(){
		FILE *fp;
		int i,j,plaka;
		
		if((fp = fopen("sehirler.dat","wb")) == NULL){
			printf("Dosya Açýlamadý");
			return 1;
		}
		for(i = 0 ; i < 10 ; i++){
			printf("Eklemek Istediginiz Sehrin Adini Giriniz:");
 			scanf("%s",kaydet.sehir);
			printf("Eklemek Istediginiz Sehrin Plakasini Giriniz:");	
    		scanf("%d",&kaydet.plaka);
    		fseek(fp,(kaydet.plaka -1) * sizeof(struct program), SEEK_SET);
    		fwrite(&kaydet,sizeof(struct program),1,fp);
    	}
    	fflush(fp);
		fclose(fp);		
	return 0;
}
		
