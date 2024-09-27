#include<stdio.h>
#include<stdlib.h>	
int hashtablo[10][2],sayac=0,x=6,giriskont=0,b=0,dolumu=0;
struct Ogrenci{
	int numara;  
 	char isim[15];            
	int notu;         
};
struct Ogrenci veri_liste[50];       
int hashfonk(int sira){ //ÝNDEX
	sira=sira%10;             
	return sira;              
}
void ekle(int sayi,int index){ // HTABLE EKLEME
	if(hashtablo[index][0]==-1){ //boþ
		hashtablo[index][0]=sayi; 
		dolumu++; 
	}
	else{
		if(hashtablo[index][1]==-1){ //dolu
			for(int i=0;i<10;i++){
				if(hashtablo[i][0]==-1){
					hashtablo[i][0]=sayi; 
					hashtablo[index][1]=i;
					dolumu++;    
					break;
				}
			}
		}
		else ekle(sayi,hashtablo[index][1]); 
	}
}

int arama(int sayi,int index){
	sayac=0;
	if(hashtablo[index][0]==sayi){  //ARAMA
		sayac++;  
		return 0;
	}	
	else{
		sayac++;
		if(hashtablo[hashtablo[index][1]][0]==sayi){ 
			sayac++;
			return 0;
		}
		else if(sayac>10){ //Bulamadý
			return 1;
		}
		else{
			arama(sayi,hashtablo[index][1]); 
		}
	}
}

int main(){
	int numara,aranacak,a,silinecek,notu;
	for(int i=0;i<2;i++){
		for(int j=0;j<10;j++){
			hashtablo[j][i]=-1;
		}
	}
	FILE *dosya;
	if((dosya=fopen("veri.txt","r"))!=NULL){
		while(!feof(dosya)){
			for(int i=0;i<10;i++){ //veri.txt yi ekleme
				fscanf(dosya,"%d %s %d",&veri_liste[i].numara,veri_liste[i].isim,&veri_liste[i].notu);
				ekle(veri_liste[i].numara,hashfonk(veri_liste[i].numara));
			
				
			}
		}
	}
	while(1){
		printf("\n1-Ekleme\n2-Arama\n3-Hash tablosunu yazdir\n4-Veri Listesi\n5-Cikis\nYapmak istediginiz islemi giriniz:");
		scanf("%d",&a);
		switch(a){
			case 1:{
				b=0;
				printf("\nEklemek istediðiniz Ismi, Notu ve Numarayi giriniz\n");
				printf("Isim:"); 
				scanf("%s",veri_liste[x].isim);
				printf("Notu:"); 
				scanf("%d",&notu);
				printf("Numara:");
				scanf("%d",&numara);
				for(int i=0;i<10;i++){
					if(hashtablo[i][0]==numara){ //AYNI NUMARRA VAR MI
					printf("\nBu numara onceden kullanilmis!!\n");
					b=1;
					}
				}
				if(b==1){
					break;
				}
				veri_liste[x].numara=numara;
				ekle(numara,hashfonk(numara));
		
				if(dolumu==0){
					
					printf("\nListe dolu!!\n");
					break;
				}
				dolumu=0;
				printf("\Kayit eklendi\n");
				x++; 
				break;
			}
			
			case 2:{
				printf("\n Aramak istediginiz ogrencinin numarasini giriniz:");
				scanf("%d",&aranacak);
				
				if(arama(aranacak,hashfonk(aranacak))==0){
				printf("ogrenci %d adimda bulundu.Numara: %d",sayac,aranacak);	
				}
				else if(arama(aranacak,hashfonk(aranacak))==1){
					printf("\nAradiginiz numarada bir ogrenci bulunmamaktadir!\n");
				}
				sayac=0;//baþtan baþla
				break;
			}
			case 3:{
				for(int i=0;i<10;i++){ //HTABLE YAZDIR
					for(int j=0;j<2;j++){
						printf("%d       ",hashtablo[i][j]);
					}	
					printf("\n");	
				}
				break;
			}
			case 4:{
				for(int i=0;i<10;i++){
					for(int j=0;j<50;j++){
						if(hashtablo[i][0]==veri_liste[j].numara){
							printf("%d   %s    %d\n",hashtablo[i][0],veri_liste[j].isim,hashtablo[i][0]);
						}
					}
				}
				break;
			}
			case 5:{
				exit(0);
				break;
			}
			default:{
				printf("\nGecersiz islem!!!\n");
				break;
			}
		}
	}
	return 0;
}
