#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#define size 99

float stdhesapla(int dizi[]) {
	float toplam = 0.0, ort, standartsapma = 0;
	int i;
	for(i=0; i<10; i++){
		toplam = toplam + dizi[i];
	}
	ort = toplam/10;
	for(i=0; i<10; i++){
		standartsapma = standartsapma + pow(dizi[i] - ort, 2);
	} 
	standartsapma = sqrt(standartsapma/10); 
	return standartsapma;
}

struct mat{
	int eb;
	int ek;
	int ort;
	int sum;
	float std;

}; 

struct mat bilgilerial( void );
void bilgileriver(struct mat);

int main(void){
	struct mat sayi;
	sayi = bilgilerial( );
	bilgileriver( sayi );
	return 0;
}

struct mat bilgilerial (void){
	struct mat islem;
	int i,j,dizi[size],a,b,c,eb,ek,sum=0,ort=0,m;
	 srand(time(0));
	 dizi[0] = rand() %10 ;
	 	for(i = 0 ; i < size ; i++){
				dizi[i] = rand() % 100 + 0;
			}
		for(j = 0 ; j < size ; j++){
				printf("%d.Sayi: %d\n ",j+1,dizi[j]);
			}
			islem.eb = dizi[0];
			for(a = 0 ; a < size ; a++){
				if(islem.eb < dizi[a+1])
					islem.eb = dizi[a+1];	
			}
			islem.ek = dizi[0];
			for(b = 0 ; b < size ; b++){
				if(islem.ek > dizi[b])
					islem.ek = dizi[b];	
			}
			for(c = 0 ; c < size ; c++){
				sum += dizi[c];
			}
			islem.ort = sum/size;	
			islem.sum = sum;
			islem.std = stdhesapla(dizi);
			
	return islem;		

}
void bilgileriver( struct mat islem){
	
	
		printf("	En Buyuk Sayi: %d\n",islem.eb);
		printf("	En Kucuk Sayi: %d\n",islem.ek);
		printf("	Ortalama %2.d\n",islem.ort);
		printf("	Toplam: %d\n",islem.sum);
		printf("	Standart Sapma: %2.f",islem.std);

}
