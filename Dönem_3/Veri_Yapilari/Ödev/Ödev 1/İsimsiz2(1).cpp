#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Liste {
	int frekans;
	char harf;
	struct Liste *sonraki;
};
Liste *root= NULL ;
Liste *ilk = NULL,*son = NULL, *yeni,*gecici,*silGecici = NULL;  
  Liste *iter = root;
Liste *harfEkle(Liste *root,char ch){
  if (root == NULL){
    root = (Liste*)malloc(sizeof(Liste));
    root -> sonraki = NULL;
    root -> harf = ch;
    return root;
  }
  if (root -> harf > ch){
    Liste *temp = (Liste *)malloc(sizeof(Liste));
    temp -> harf = ch;
    temp -> sonraki = root;
    return temp;
  }
  Liste *iter = root;
  while(iter -> sonraki != NULL && iter -> sonraki -> harf < ch ){
    iter = iter -> sonraki;
  }
  Liste *temp = (Liste *)malloc(sizeof(Liste));
  temp -> sonraki = iter -> sonraki;
  iter -> sonraki = temp;
  temp -> harf = ch;
  return root;
}
void listele(Liste *root){
    Liste *temp = (Liste *)malloc(sizeof(Liste));
    temp = root;
	while(temp != NULL){
        printf("%c %d \n", temp->harf, temp->frekans );
        temp = temp->sonraki;
    }
}
void sild(char harf){
	iter = root;
    int kontrol = 0;
    if(iter == NULL)
        kontrol = -1;
        
    else if(root->harf == harf){
        silGecici = root;    
        root = root->sonraki;
        free(silGecici);
        kontrol = 1;
    }
    else{
        gecici = iter;
        while(gecici->sonraki != NULL){        //gecici deðiþken ile liste üzerinde dolaþým saðlanýr.
            if(gecici->sonraki->harf == harf){
                kontrol = 1;    
                silGecici = gecici->sonraki;            //Silinecek düðüm sil adýnda deðiþkene atýlýr.
            if(silGecici == son)        //Silinecek düðüm son düðüm ise "son" un kaybolmamasý için bir geriye atanýr.
                    son = gecici;
                gecici->sonraki = silGecici->sonraki;        //Liste kaybolmasýn diye aradaki bað düzenlenir.
                free(silGecici);                    //Sil düðümü bellekten silinir.
                break;
               }
            gecici = gecici->sonraki;
         }
    }
    if(kontrol == 0)
        printf("Silmek Istediginiz Eleman Listede Yoktur...\n");
    else if(kontrol == -1)
        printf("Listede eleman yoktur...\n");
    else if(kontrol == 1)
        printf("%c sayisi listeden silinmiþtir...\n",harf);
}

int FrekansBul(char a) {
    int kontrol = 0;
    gecici = root;
    if (gecici == NULL)
        kontrol = -1;
    else {
        while (gecici != NULL) {
            if (a == gecici->harf) {
                kontrol = gecici->frekans;
            }
            gecici = gecici->sonraki;
        }
    }
    
    return kontrol;
}
void FrekansKontrol(char a[]){
	bool kontrol=false;
	int j;
	for(int i=0;i<strlen(a);i++){
		int d = FrekansBul(a[i]);
		for(j=i;j<d+i;j++){
			if(a[i]==a[j]){
				kontrol=true;
				
			}
			else{
				kontrol=false;
				printf("%c hatali",a[i]);
				break;
			}
		}
		i=j-1;
		if(kontrol==false){
			break;
		
		}
		
	}
	if(kontrol==true){
		printf("Dogru\n");
		
	}
	else{
		printf("Yanlis\n");
	}
}


int Arama(char aranan) {
    int kontrol = 0;
    iter = root;
    if (iter == NULL)
        kontrol = -1;
    else {
        while (iter != NULL) {
            if (aranan == iter->harf) {
                kontrol = 1;
            }
            iter = iter->sonraki;
        }
    }
    return kontrol;
}
void Ekle(char harf,int frekans){
	
	if(Arama(harf)==1){
    	printf("Listede bu eleman zaten var \n");	
	}
	else {
		yeni = (Liste *) malloc(sizeof(Liste));
	    yeni->harf = harf;
	    yeni->frekans = frekans;
	    yeni->sonraki = NULL;
	 Liste *iter = root;
 	 while(iter -> sonraki != NULL && iter -> sonraki -> harf < harf ){
    iter = iter -> sonraki;
  }
	    if(iter == NULL){     //Ýlk düðümde eleman olup olmadýðýný kontrol et.
	        iter = (Liste*)malloc(sizeof(Liste));
    		iter -> sonraki = NULL;
    		iter -> harf = harf;
	    	iter ->frekans = frekans;
	    }
	    
	    else{     
    		Liste *temp = (Liste *)malloc(sizeof(Liste));           //Ýlk düðümde eleman varsa bu iþlemleri yap.
	        temp -> sonraki = iter -> sonraki;
 		 	iter -> sonraki = temp;
 			temp -> harf = harf;
	    	temp->frekans = frekans;
	    }
	}
	listele(root);
}
int main() {
    char harf;
	int frekans;
	FILE *f=fopen("a.txt","r"); char ch; int sayi; int kontrol=0; 
	Liste *temp = (Liste*)malloc(sizeof(Liste));
	while(!feof(f)) {
		if(kontrol == 0 ) {
			fscanf(f,"%c",&ch );
				if (ch != ',') {
				
					if(ch == '\n') {
					kontrol=1;
				}
			if(ch != '\n'){
			
				root = harfEkle( root, ch );
				temp = root;
				}
			}
		}
		else {
			if(temp != NULL ){
			fscanf(f,"%d", &sayi);
			fscanf(f,"%c", &ch );
			temp->frekans = sayi;
			temp=temp->sonraki;
			}
		}		
	} 
	listele(root);	
	
			printf("Eklemek istediginiz harfi giriniz = ");
			scanf(" %c", &harf);
			printf("Eklemek istediginiz harfin frekansini giriniz = ");
			scanf(" %d",&frekans);
			Ekle(harf,frekans);
			printf("Hangisi Silinsin!");
			scanf(" %c", &harf);
			sild(harf);
			
			
			listele(root);	
			char harfler[100];
			printf("Eklemek istediginiz harfi giriniz = ");
			scanf(" %s", &harfler);
			FrekansKontrol(harfler);
			listele(root);	
}
