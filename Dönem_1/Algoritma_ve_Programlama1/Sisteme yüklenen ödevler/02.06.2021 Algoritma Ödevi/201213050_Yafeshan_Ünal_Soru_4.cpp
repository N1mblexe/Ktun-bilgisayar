#include<stdio.h>
#include<atdlib.h>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

struct Node * DugumOlustur(int veri){
	struct Node *yenidugum = (struct Node*)malloc(1*sizeof(Node));
	yenidugum->data=veri;
	yenidugum->next=NULL;
	yenidugum->prev=NULL;
	return yenidugum;
}
void arayaEkle(int kiminonu,int eklenecek){
	struct Node *temp=start;
		struct Node *prev=NULL;
		struct Node *onceli=DugumOlustur(eklenecek);
		
			while(temp->next!=NULL){
				if(temp->data==kiminonu){
					onceki = temp->prev;
					break;
				}
			temp=temp->next;
			}
			temp->prev=arayaEklenecek;
			arayaEklenecek->next=temp;
			arayaEklencek->prev=onceki;
}


	int main(){
		int ara;
		printf("Araya Eklemek Istediginiz Sayiyi Giriniz"),
		scanf("%d",%ara);
		arayaEklenecek(ara);
		
		
		return 0;
	}
