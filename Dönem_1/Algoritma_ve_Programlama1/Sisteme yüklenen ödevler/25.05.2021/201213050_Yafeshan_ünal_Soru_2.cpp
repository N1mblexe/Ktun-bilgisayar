#include<stdio.h>
#include<stdlib.h>

struct Student{
	int id;
	int vize;
	int final;
	struct Student *next;
};

struct Student *Push(struct Student *top,int id,int vize,int final){
	
	struct Student *yeni = (struct Student *)malloc(1*sizeof(struct Student *));
	
	yeni->id = id;
	yeni->vize = vize;
	yeni->final = final;
	yeni->next = NULL;
		
		if(top==NULL){
			top=yeni;
			return top;
		}
		else{
			yeni->next = top;
			return yeni;
		}
	
}

struct Student *Pop(struct Student *top,int *id,int *vize,int *final){
	if(top==NULL){
		id=NULL;
		vize=NULL;
		final=NULL;
		return top;
	}
	else{
		struct Student *temp;
		temp = top;
		*id = temp->id;
		*vize = temp->vize;
		*final = temp->final;
		
		top = top->next;
		free(temp);
		return top;
	}
}


int main(){
	struct Student *ilk=NULL;
	struct Student *BUL=NULL;
	struct Student *temp=NULL;
	struct Student *ptr=NULL;
	int id,vize,final,a,sec,aranan;
	
	
	while(a!=0){
		
			
			printf("Lutfen Ogrencinin Numarasini Giriniz");
			scanf("%d",&id);
			printf("Lutfen Ogrencinin Vize Notunu Giriniz");
			scanf("%d",&vize);
			printf("Lutfen Ogrencinin Final Notunu Giriniz");
			scanf("%d",&final);
			printf("Lutfen Programi Sonlandirmak Istiyorsaniz 0'a Basiniz:");
			scanf("%d",&a);
			ilk=Push(ilk,id,vize,final);
				ilk=Pop(ilk,&id,&vize,&final);
			printf("Lutfen Yapmak Istediginiz Islemi Giriniz:\n1-Ekle\n2-Bul ve Sil\n3-Bul ve Goster\n4-Tumunu Listele");
			scanf("%d",&sec);
				if(sec==4);
					printf("Numara:%d\n Vize:%d\n Final:%d\n",id,vize,final);
					//ARAMA VE BULMA
				if(sec==3){
					printf("Aramak Istediginiz Ogrencinin Id sini Giriniz");
					scanf("%s",&aranan);
					temp = ilk;
					while(temp!=NULL){
						if(temp->id==aranan){
							
							BUL = temp;
							
						}
					temp = temp->next;
					}
				}
				//BULMA VE SÝLME
				else if(sec==2){
						if(BUL==ilk){
						free(BUL);
						ilk=ilk->next;
					}
					else{
						temp = ilk;
						while(temp->next!=BUL){
							temp = temp->next;
						}
					temp->next=temp->next->next;
					temp=ilk;
					}
				}
				else if(sec==1){
					if(ilk==NULL){
						//Ýlki atamayý burda gerçekleþtirdik
						ilk = (struct Student*)malloc(1*sizeof(Student));
						ilk->id = id;
						ilk->vize=vize;
						ilk->final=final;
						ilk->next = NULL;
						ptr = ilk;
					}
					
					else{
						ptr->next = (struct Student*)malloc(1*sizeof(struct Student));
						ptr = ptr->next;
						ptr->id = id;
						ptr->vize = vize;
						ptr->final = final;
						ptr->next = NULL;
					}
				}
	
	
}
	return 0;
}
