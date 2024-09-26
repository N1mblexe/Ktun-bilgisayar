#include<stdio.h>
#include<stdlib.h>

struct Node{
	int x;
	struct Node* next;
};

	int main(){
		struct Node * ilk=NULL;
		struct Node * gecici=NULL;
		struct Node * BUL=NULL;
		struct Node * ptr=NULL;
		int aranan,find,sayi=1;
		
			while(sayi!=0){
				printf("Lutfen Sayi Giriniz Programi sonlandirmak Isterseniz 0'a Basiniz:");
				scanf("%d",&sayi);	
				
					if(ilk==NULL){
						//Ýlki atamayý burda gerçekleþtirdik
						ilk = (struct Node*)malloc(1*sizeof(Node));
						ilk->x = sayi;
						ilk->next = NULL;
						ptr = ilk;
					}
					
					else{
						ptr->next = (struct Node*)malloc(1*sizeof(struct Node));
						ptr = ptr->next;
						ptr->x = sayi;
						ptr->next = NULL;
					}
				
			}
			printf("Lutfen Listede Aramak Istediginiz Sayiyi Giriniz:");
			scanf("%d",&aranan);
			//Arama kýsmý
			gecici = ilk;
			while(gecici!=NULL){
				if(gecici->x==aranan){
					BUL = gecici;
					
				}
			gecici = gecici->next;
			
			}
			//Silme kýsmý
			if(BUL==ilk){
				free(BUL);
				ilk=ilk->next;
			}
			else{
				gecici = ilk;
				while(gecici->next!=BUL){
					gecici = gecici->next;
				}
			gecici->next=gecici->next->next;
			}
		
			gecici=ilk;
			while(gecici!=NULL){
				printf("\tListenizin Son Halindeki Sayilar:%d\n",gecici->x);
			gecici = gecici->next;
			}
			printf("\tSilinen Sayi: %d",aranan);
		return 0;
	}
