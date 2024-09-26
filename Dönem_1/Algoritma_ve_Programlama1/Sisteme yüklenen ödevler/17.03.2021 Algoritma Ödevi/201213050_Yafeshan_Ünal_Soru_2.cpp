#include<stdio.h>
#include<stdlib.h>
struct program{
	char sehir[10];
	int plaka;
};
	int main(){
 		struct program kaydet;
    	FILE *fp;
    	int i;
    	
    	if((fp = fopen("sehirler.dat","rb")) == NULL){
			printf("Dosya Açýlamadý");
			return 1;
		}
		else {
		
			for(i = 0 ; i < 10 ; i++){
				printf("Gormek Istediginiz Sehrin Plakasini Giriniz:");
				scanf("%d",&kaydet.plaka);
				if(kaydet.plaka == 01){
					printf("\t\t0%d Plakali Sehirimiz : adana\n",kaydet.plaka);
					continue;
				}
				if(kaydet.plaka<= 0 || kaydet.plaka > 10){
					printf("\tLutfen 1 ile 10 Arasinda Plaka Kodlari Giriniz");
					scanf("%d",&kaydet.plaka);
			
			}
			
				fseek(fp,(kaydet.plaka-1) * sizeof(struct program), SEEK_SET);
				fread(&kaydet,sizeof(struct program),1,fp);
				printf("\t\t0%d Plakali Sehirimiz : %s\t\n",kaydet.plaka,kaydet.sehir);
					
			}
		}
		fflush(fp);
    	fclose(fp);
    	return 0;
	}
