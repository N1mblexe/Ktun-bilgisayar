#include<stdio.h>
#include<stdlib.h>

struct Node{
	int sayi;
	struct Node *next;
	struct Node *prev;
};

	int main(){
		struct Node *ilk=NULL;
		struct Node *ptr=NULL;
		struct Node *temp=NULL;
		struct Node *BUL=NULL;
		
		int sayi=1,aranan,find;
		// EKLEME KISMI 		// 1.ÖDEV İÇİN OLAN KISIM BURDAN BAŞLAMAKTADIR
			while(sayi!=0){
				printf("\tLutfen Tam Sayi Giriniz Programi Sonlandirmak Istiyorsaniz 0'a Basiniz:");
				scanf("%d",&sayi);
				
				if(ilk==NULL){
					ilk = (struct Node*)malloc(1*sizeof(struct Node));
					ilk->sayi = sayi;
					ilk->next = NULL;
					ilk->prev = NULL;
					ptr=ilk;
				}
				else{
					ptr->next = (struct Node*)malloc(1*sizeof(struct Node));
					ptr->next->prev = ptr;
					ptr = ptr->next;
					ptr->sayi = sayi;
					ptr->next = NULL;
				}
			}
					//1.ÖDEV BURADA SON BULMAKTADIR
					
					//2.ÖDEV BURADA BAŞLAMAKTADIR
			//ARAMA KISMI
			printf("Lutdfen Aramak Istediginiz Sayiyi Giriniz:");
			scanf("%d",&aranan);
			
			temp = ilk;
			while(temp!=NULL){
				if(temp->sayi==aranan){
					BUL = temp;
					
				}
			temp = temp->next;
			
			}
			//Silme kısmı
			if(BUL==ilk){
				ilk=ilk->next;
				ilk->prev = NULL;
				free(BUL);
			}
			else{
				temp = ilk;
				while(temp->next!=BUL){
					temp = temp->next;
				}
				if(BUL->next!=NULL){
					temp->next->next->prev = temp;
					temp->next = temp->next->next;
				}
				else{
					temp->next = NULL;
				}
			free(BUL);
			}
		
			temp=ilk;
			//temp=ptr;
			while(temp!=NULL){
				printf("\tListenizin Son Halindeki Sayilar:%d\n",temp->sayi);
			temp = temp->next;
			//temp = temp->prev;
			}
			printf("\tSilinen Sayi: %d",aranan);
		return 0;
	}
