#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct Liste{
	int frekans;
	char harf;
	struct Liste *sonraki;
}BListe;
BListe *ilk = NULL,*son = NULL, *yeni,*gecici,*silGecici = NULL;    


int ElemanSayisiBul()
{
	int sayac=0;
	BListe *gecici=ilk;
    while(gecici!=NULL){
    	sayac++;
    	gecici=gecici->sonraki;
	} 

	return sayac;
	
}

int FrekansBul(char a) {
    int kontrol = 0;
    gecici = ilk;
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



	int rastgeleSayilar[100];
bool RVeriVarmi(int aranan) {
    bool kontrol = false;
	for(int i=0;i<100;i++){
		if(rastgeleSayilar[i]==aranan){
			kontrol = true;
		}
	}

    return kontrol;
}
void RastgeleVeri(int veriSayisi){
	

	for(int j=0;j<veriSayisi;j++){
		
		int r=rand()%ElemanSayisiBul()+1;
		while(RVeriVarmi(r)){
			r=rand()%ElemanSayisiBul()+1;
		}
		rastgeleSayilar[j]=r;
	}
	for(int j=0;j<veriSayisi;j++){

	

	gecici=ilk;
//	printf("%d",r);
	
	for(int i=1;i<rastgeleSayilar[j];i++){
    	gecici=gecici->sonraki;
	} 
	for(int i=0;i<gecici->frekans;i++){
    	printf("%c",gecici->harf);
	} 
	
//	printf("%c",gecici->harf);printf("\n");
		}
}


void Sirala()
{

	int elemans=ElemanSayisiBul();
	gecici=ilk;
	char harfler[elemans],bosc;
	int frekanslar[elemans],bosi;
	for(int i=0;i<elemans;i++){
		harfler[i]=gecici->harf;
		frekanslar[i]=gecici->frekans;
		gecici=gecici->sonraki;

	}
/*	 for(int i = 0; i < elemans; i++)
    {
    	printf("%c -- ",harfler[i]);

    }

 printf("\n");*/
	
    //iterasyonlarýn olduðu dýþ döngü
   	int temp,temp2;
     int i, j;
 
     for (i=1; i<elemans; i++)
     {
         for (j=0; j<elemans-i; j++)
         {
             if(harfler[j] > harfler[j+1])
             {
                        temp = harfler [j];
                        harfler [j] = harfler [j+1];
                        harfler [j+1] = temp;
                        
                        temp2 = frekanslar [j];
                        frekanslar [j] = frekanslar [j+1];
                        frekanslar [j+1] = temp2;
                        
                        
             }
         }
     }
    
  /*  for(int i = 0; i < elemans; i++)
    {
    	printf("%c -- ",harfler[i]);

    }*/
    gecici=ilk;
    for(int i = 0; i < elemans; i++)
    {
    	gecici->harf=harfler[i];
		gecici->frekans=frekanslar[i];
		gecici=gecici->sonraki;
    }
}
 
int Arama(char aranan) {
    int kontrol = 0;
    gecici = ilk;
    if (gecici == NULL)
        kontrol = -1;
    else {
        while (gecici != NULL) {
            if (aranan == gecici->harf) {
                kontrol = 1;
            }
            gecici = gecici->sonraki;
        }
    }
    
    return kontrol;
}
void Sil(char harf)
{
    int kontrol = 0;
    if(ilk == NULL)
        kontrol = -1;
        
    else if(ilk->harf == harf){
        silGecici = ilk;    
        ilk = ilk->sonraki;
        free(silGecici);
        kontrol = 1;
    }
    
    else{
        
        gecici = ilk;
        
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
        printf("%c harfi listeden silinmistir...\n",harf);
}
void Listele() {
 
    gecici = ilk;
    if (gecici == NULL) {
 
        printf("Listenizde eleman bulunmamaktadir...");
       
 
    } else {
        while (gecici != NULL) {
 
            printf("%d - %c\n", gecici->frekans,gecici->harf);
            gecici = gecici->sonraki;
 
        }
    }
}
void Ekle(char harf,int frekans){
    if(Arama(harf)==1){
    	printf("Listede bu eleman zaten var \n");	
	}
	else {
		yeni = (BListe *) malloc(sizeof(BListe));
	    yeni->harf = harf;
	    yeni->frekans = frekans;
	    yeni->sonraki = NULL;
	 
	    if(ilk == NULL){     //Ýlk düðümde eleman olup olmadýðýný kontrol et.
	        ilk = yeni;
	        son = ilk;
	    }
	    else{                //Ýlk düðümde eleman varsa bu iþlemleri yap.
	        son->sonraki = yeni;
	        son = son->sonraki;
	    }
	}
    Sirala();
}

void Menu(char menuHarf){
	printf("\n\n");
	system("cls");
    char harf;
	int frekans;
   
	char menu=menuHarf;
	if(menuHarf==NULL){
		printf("	 - Arama yapmak icin ( a )\n");
		printf("	 - Ekleme yapmak icin ( e )\n");
		printf("	 - Silme yapmak icin ( s )\n");
		printf("	 - Rastgele veri icin ( r )\n");
		printf("	 - Frekans kontrol icin ( f )\n");
		printf("	 - Listelemek icin ( l )\n");
		printf("	 - Cikis icin ( c ) giriniz.\n");
		scanf(" %c",&menu);	
	}

	switch(menu){
		case 'a':
			
			printf("Aramak istediginiz harfi giriniz = ");
			scanf(" %c", &harf);

			
			if (Arama(harf) == -1)
        printf("\nListede Eleman Yoktur...\n");
    else if (Arama(harf) == 1)
        printf("\n%c harfi bulunmustur..\n", harf);
    else
        printf("\nAranan Sayi Bulunamamistir...\n");
				printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			break;
		case 'e':
			
			printf("Eklemek istediginiz harfi giriniz = ");
			scanf(" %c", &harf);
			printf("Eklemek istediginiz harfin frekansini giriniz = ");
			scanf(" %d",&frekans);
			Ekle(harf,frekans);
			printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			break;
		case 's':
		
			printf("Silmek istediginiz harfi giriniz = ");
			scanf(" %c", &harf);
			Sil(harf);
			printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			Menu(menu);
			printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			break;
		case 'l':
			
			Listele();
			printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			Menu(menu);
printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			break;
		case 'r':
			
			int veriSayisi;
				printf("Kaçtane veri istersiniz");
				scanf(" %d",&veriSayisi);
				RastgeleVeri(veriSayisi);
				printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			break;
		case 'f':
			char harfler[100];
			
			printf("Eklemek istediginiz harfi giriniz = ");
			scanf(" %s", &harfler);
			FrekansKontrol(harfler);
			printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			break;
		case 'o':
		
			 Sirala();
			 printf("\n - Menu icin ( m )\n");
			printf(" - Cikis icin ( c ) giriniz.\n");
			scanf(" %c",&menu);
			break;
		case 'c':
			 exit(0);
			break;
		
	}
}

int main(){
	srand(time(NULL));
	FILE *dg = fopen("dosya.txt","r"); 
	char ad[12],ad2[12];
	char harfler[6],a;
	int frekanslar[6],ai;
 	 BListe liste; 
 	 while (!feof(dg)) 
           { 


 	   for(int i=0;i<1;i++) {
 	   		fscanf(dg,"%s",&ad);
		}
		 for(int i=0;i<2;i++) {
 	   		fscanf(dg,"%s",&ad2);
		}

	

		for(int j=0;j<6;j++){

			harfler[j]=ad[j*2];

		}

		
		for(int j=0;j<12;j++){
			a=ad2[j*2];
			
			int sayac=0;
			for(int t=48;t<58;t++){
				if(t==a){
					t=100;
				}
				else{
					sayac++;
				}
				
			}
			frekanslar[j]=sayac;
			
		}
	/*	for(int j=0;j<6;j++){
			printf("%c ",ad[j*2]);
			printf("%d -",frekanslar[j]);

		}*/
		for(int j=0;j<6;j++){
			Ekle(ad[j*2],frekanslar[j]);
		}
	

 	 	
  	 }
	while(true){
		Menu(NULL);	
	}
}
