#include<stdio.h>
#include<stdlib.h>
/*Ba�l� liste d���m yap�s�n� a�a��daki gibi olu�turunuz, kullan�c� istedi�i s�rece ��rencilere ait vize ve final notlar�n� giriniz.
 T�m liste olu�turulduktan sonra ��rencilerin ortalama notlar�n� hesaplayarak ekrana yazd�r�n�z. 
*/
struct OGRENCI{
    int id;
    float vize; 
    float final;
    float ortalama;
    struct OGRENCI *next;
};

	int main(){
		
		int a,i=1,m=1,n=1;
    	float b; 
    	float c;
    	float ortalama;
		struct OGRENCI * ilk=NULL;
		struct OGRENCI * ptr=NULL;
		struct OGRENCI * temp=NULL;
		
			while(m!=0){
				printf("\tLutfen %d.Ogrencinin Numarasini Giriniz:",i);
				scanf("%d",&a);
				printf("\tLutfen %d.Ogrencinin Vize Notunuzu Giriniz:",i);
				scanf("%f",&b);
				printf("\tLutfen %d.Ogrencinin Final Notunuzu Giriniz:",i);
				scanf("%f",&c);
				printf("Programi Bitirmek Istiyorsaniz 0'a Basiniz   Istemiyorsaniz 1'e Basiniz:");
				scanf("%d",&m);
				float sum=(b+c)/2;
					
						if(ilk==NULL){
						
						ilk = (struct OGRENCI *)malloc(1*sizeof(OGRENCI));
						ilk->id=a;
						ilk->vize=b;
						ilk->final=c;
						ilk->ortalama=sum;
						ilk->next=NULL; 
						ptr=ilk;
						}
						else{
						
						ptr->next = (struct OGRENCI*)malloc(1*sizeof(struct OGRENCI));
						ptr = ptr->next;
						ptr->id = a;
						ptr->vize=b;
						ptr->final=c;
						ptr->ortalama=sum;
						ptr->next = NULL;
						
						}
				
					
					
			i++;		
			}
			temp = ilk;
			while(temp!=NULL){
				printf("\n\n\t\t%d.Ogrencinin Numarasi:%d\n Vize Notu:%f\n Final Notu:%f\n Ortalamasi:%f\n",n,temp->id,temp->vize,temp->final,temp->ortalama);
			temp = temp->next;
			n++;
			}
		
		temp=ilk;
    
    
		
		temp=temp->next;}
	
	

	return 0;
}
