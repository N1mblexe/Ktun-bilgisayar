#include<stdio.h>
#include<stdlib.h>

struct Node{
	int id;
	float vize;
	float final;
	float ortalama;
	struct Node *next;
	struct Node *prev;
};

	int main(){
		int a,m=1,i=1,q=1;
		float b,c,sum;
		struct Node *ilk=NULL;
		struct Node *ptr=NULL;
		struct Node *temp=NULL;
		
			while(m!=0){
				printf("Lutfen %d.Ogrencinin Id'sini Giriniz",i);
				scanf("%d",&a);
				printf("Lutfen %d.Ogrencinin Vizesini Giriniz:",i);
				scanf("%d",&b);
				printf("Lutfen %d.Ogrencinin Final Notunu Giriniz:",i);
				scanf("%d",&c);
				sum = (a+b)/2;
				if(ilk==NULL){
					ilk = (struct Node *)malloc(1*sizeof(Node));
					
					ilk->id = a;
					ilk->vize = b;
					ilk->final = c;
					ilk->ortalama = sum;
					ilk->next=NULL;
					ilk->prev=NULL;
					ptr=ilk;
				}
				else{
					ptr->next = (struct Node *)malloc(1*sizeof(Node));
					
					ptr=ptr->next;
					ptr->id = a;
					ptr->vize = b;
					ptr->final = c;
					ptr->ortalama = sum;
					ptr->next=NULL;
					ptr->prev=NULL;
				}
			i++;
			printf("Programa Devam Etmek istiyorsaniz 1'e Istemiyorsaniz 0'a Basiniz:");
			scanf("%d",&m);
			}
		
			temp=ilk;
			while(temp!=NULL){
				printf("\n\n\t%d. Ogrencinin Numarasi:%d , Vize Notu:%f , Final Notu:%f , Ortalamasi:%f\n",q,temp->id,temp->vize,temp->final,temp->ortalama);
				temp=temp->next;
			q++;
			}
		return 0;
	}
