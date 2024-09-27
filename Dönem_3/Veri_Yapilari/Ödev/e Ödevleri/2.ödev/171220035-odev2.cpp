#include<stdio.h>
#include<stdlib.h>


struct akademisyen{
	int sicilNo;
	char* ad;
	char* soyAd;
	int unvanID;
	struct akademisyen *sonraki; 
};

akademisyen *okunan=NULL;
akademisyen *iter=NULL;
akademisyen *d_oku(FILE *dosyaa){
	//SIKINTI :FSCANF ÝLE OKURKEN SAYILARI OKUMADI NEDEN? FSCANF(FP,",%S,&OKUNAN->AD);STRÝNG OLARAK ALIP CHAR DÝZÝSÝNE ATTIÐIMDA DA 
	//BASTIRCAÐIMDA %C YÝ KULLANAMADIM O YÜZDEN BASMADI.
	FILE *dosya=fopen("akademisyenler.txt","r");
	
	char ID[2];
	char sicil[6];

	char adi[20];
	char soyadi[15];
	
	
	akademisyen *okunan=(akademisyen*)malloc(sizeof(akademisyen));//okunan 1. kutuyu tutuyor temp yeni kutuya gidiyor ilerliyor.
	akademisyen *iter=okunan;//kuyruðun 1. elemanýný tutuyorum.
	iter->sonraki=(akademisyen*)malloc(sizeof(akademisyen));

	
	fseek(dosya,0,SEEK_SET);//fseek ile dosyada istediðim yere konumlanabiliyorum.SEEK_SET:baþlangýçtan itibaren demek.
	fgets(ID,2,dosya);
	//printf("1.ID numarasi:%s\n",ID);
	
	fseek(dosya,1,SEEK_CUR);//SEEK_CUR:Olduðun konumdan itibaren devam et
	fgets(sicil,5,dosya);
//	printf("1.Sicil numarasi:%s\n",sicil);
	
	fseek(dosya,1,SEEK_CUR);
	fgets(adi,20,dosya);
//	printf("1.Ad:%s\n",adi);
	
	fseek(dosya,1,SEEK_CUR);
	fgets(soyadi,15,dosya);
	//printf("1.Soyad:%s\n",soyadi);
	
	iter->unvanID=1;
	iter->sicilNo=1231;
	iter->ad=adi;
	iter->soyAd=soyadi;
	printf("ID:%d\nSicilNu:%d\n",iter->unvanID,iter->sicilNo);
	printf("Ad:%s\n",iter->ad);
	printf("Soyad:%s\n",iter->soyAd);
	
	
	fseek(dosya,0,SEEK_CUR);
	fgets(ID,2,dosya);
//	printf("2.ID:%s\n",ID);
	
	fseek(dosya,1,SEEK_CUR);
	fgets(sicil,5,dosya);
//	printf("2.sicil numarasi:%s\n",sicil);
	
	fseek(dosya,1,SEEK_CUR);
	fgets(adi,20,dosya);
//	printf("2.Adi:%s\n",adi);

	fseek(dosya,1,SEEK_CUR);
	fgets(soyadi,20,dosya);
//	printf("2.soyadi:%s\n",soyadi);
	
	iter=iter->sonraki;
	iter->unvanID=2;
	iter->sicilNo=4567;
	iter->ad=adi;
	iter->soyAd=soyadi;
	printf("ID:%d\nSicilNu:%d\n",iter->unvanID,iter->sicilNo);
	printf("Ad:%s\n",iter->ad);
	printf("Soyad:%s\n",iter->soyAd);
	
	
	fseek(dosya,0,SEEK_CUR);
	fgets(ID,2,dosya);
//	printf("3.ID:%s\n",ID);
	
	fseek(dosya,1,SEEK_CUR);
	fgets(sicil,5,dosya);
//	printf("3.sicil numarasi:%s\n",sicil);
	
	fseek(dosya,1,SEEK_CUR);
	fgets(adi,20,dosya);
//	printf("3.Adi:%s\n",adi);

	fseek(dosya,1,SEEK_CUR);
	fgets(soyadi,20,dosya);
//	printf("3.soyadi:%s\n",soyadi);
	
	iter=okunan->sonraki;
	//okunan=(akademisyen*)malloc(sizeof(akademisyen));
	iter->unvanID=2;
	iter->sicilNo=6784;
	iter->ad=adi;
	iter->soyAd=soyadi;
	printf("ID:%d\nSicilNu:%d\n",iter->unvanID,iter->sicilNo);
	printf("Ad:%s\n",iter->ad);
	printf("Soyad:%s\n",iter->soyAd);
	
	
	
	iter->sonraki=NULL;	
}
void listele(akademisyen *r){
	//akademisyen *gecici=okunan;	
	while(r!=NULL)
	{
		printf("LISTELEME\nID:%d\nSicil Nu:%d\nAd:%s\nSoyad:%s\n",r->unvanID,r->sicilNo,r->ad,r->soyAd);
	//	gecici=gecici->sonraki;
 		r=r->sonraki;
	}
}
akademisyen *ilk=NULL,*son=NULL,*arada=NULL;
int main(){
	FILE *dosya=fopen("akademisyenler.txt","r+");
	akademisyen *dos_okunan=d_oku(dosya);//dosyadan okunan bilgiler dos_okunan da
	int secim,nu;
	listele(dos_okunan);
}
