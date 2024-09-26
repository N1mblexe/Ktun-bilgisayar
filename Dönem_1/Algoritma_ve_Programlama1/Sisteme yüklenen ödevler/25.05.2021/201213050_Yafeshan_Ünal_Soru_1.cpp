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
		struct Student *top=NULL;
		
		int id,vize,final,a=1,sayac;
		
		while(a!=0){
			printf("Lutfen Ogrencinin Numarasini Giriniz");
			scanf("%d",&id);
			printf("Lutfen Ogrencinin Vize Notunu Giriniz");
			scanf("%d",&vize);
			printf("Lutfen Ogrencinin Final Notunu Giriniz");
			scanf("%d",&final);
			printf("Lutfen Programi Sonlandirmak Istiyorsaniz 0'a Basiniz:");
			scanf("%d",&a);
			top=Push(top,id,vize,final);
				top=Pop(top,&id,&vize,&final);
			
			printf("Numara:%d\n Vize:%d\n Final:%d\n",id,vize,final);
		}
	
	

	return 0;
}


				//Queue Kuyruk kýsmý

/**
#include<stdio.h>
#include<stdlib.h>

struct Student{
	int id;
	int vize;
	int final;
	struct Student *next;
};

struct Student *Enqueue(struct Student *ilk,int id,int vize,int final){
	struct Student *yeni = (struct Student *)malloc(1*sizeof(struct Student *));
	
	yeni->id = id;
	yeni->vize = vize;
	yeni->final = final;
	yeni->next = NULL;
	
	if(ilk==NULL){
		ilk=yeni;
		return ilk;
	}
	else{
		struct Student *temp = ilk;
		while(temp->next!=NULL)
			temp=temp->next;
			
		temp->next = yeni;
		return ilk;
	}
}

struct Student *Dequeue(struct Student *ilk,int *id,int *vize,int *final){

	
	if(ilk==NULL){
		id=NULL;
		vize=NULL;
		final=NULL;
		return ilk;
	}
	else{
		struct Student *temp;
		temp = ilk;
		*id = temp->id;
		*vize = temp->vize;
		*final = temp->final;
		ilk = ilk->next;
		free(temp);
		return ilk;
	}
}

int main(){
	struct Student *ilk=NULL;
	int id,vize,final,a;
	
	while(a!=0){
			printf("Lutfen Ogrencinin Numarasini Giriniz");
			scanf("%d",&id);
			printf("Lutfen Ogrencinin Vize Notunu Giriniz");
			scanf("%d",&vize);
			printf("Lutfen Ogrencinin Final Notunu Giriniz");
			scanf("%d",&final);
			printf("Lutfen Programi Sonlandirmak Istiyorsaniz 0'a Basiniz:");
			scanf("%d",&a);
			ilk=Enqueue(ilk,id,vize,final);
				ilk=Dequeue(ilk,&id,&vize,&final);
			
			printf("Numara:%d\n Vize:%d\n Final:%d\n",id,vize,final);
		}
	
	
	
	return 0;
}/
