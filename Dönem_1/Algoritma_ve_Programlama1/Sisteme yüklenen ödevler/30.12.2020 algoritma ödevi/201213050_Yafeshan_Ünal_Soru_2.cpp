#include<stdio.h>
struct OGRENCI{
	char ad[20];
	char soyad[20];
	int id;
	struct DERS{
		int vize;
		int final;
		int derskodu;
		float ortalama;
	}ders[2];	 
}ogrenci[2];

	int main(){
		int ortalama = 0;
		for(int i = 0 ; i < 3 ; i++){
			printf("%d. ogrencinin adini giriniz: ",i+1,ogrenci[i].ad);
			scanf("%s",&ogrenci[i].ad);
			printf("%d. ogrencinin soyadini giriniz: ",i+1,ogrenci[i].soyad);
			scanf("%s",&ogrenci[i].soyad);
			printf("%d. ogrencinin id sini giriniz: ",i+1,ogrenci[i].id);
			scanf("%d",&ogrenci[i].id);	
		
			
		
			for(int j = 0 ; j < 5 ; j++){
				printf("	LUTFEN 0 ILE 100 ARASINDA DEGERLER GIRINIZ!!!\n");
				printf("%d. Dersin kodunu giriniz: ",j+1);
				scanf("%d",&ogrenci[i].ders[j].derskodu);
				printf("%d. Vize notunu giriniz: ",j+1);
				scanf("%d",&ogrenci[i].ders[j].vize);
				printf("%d. Final notunu giriniz",j+1);
				scanf("%d",&ogrenci[i].ders[j].final);	
				ogrenci[i].ders[j].ortalama = (float) ((ogrenci[i].ders[j].vize * 0.4) + (ogrenci[i].ders[j].final * 0.6));
			}printf("\n");
				printf("Ogrenci Adi: %s\n Ogrenci Soyadi: %s\n Ogrencinin Numarasý: %d\n",ogrenci[i].ad,ogrenci[i].soyad,ogrenci[i].id);
			
				for(int j = 0 ; j < 5 ; j++){
					printf("%d. Dersin Ortalamasi: %2.f\n",j+1,ogrenci[i].ders[j].ortalama);
				}
			}
			
				for(int i = 0; i < 5; i++) {
					for(int j = 0; j < 3; j++) {
						ortalama = (ortalama + ogrenci[j].ders[i].ortalama);
					}
							printf("%d. Dersin Ortalamasi %d\n", i+1,ortalama);
				}
	}
