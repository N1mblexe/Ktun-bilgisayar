#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Liste {
	int frekans;
	char harf;
	struct Liste *sonraki;
};
Liste *iter = NULL, *root = NULL, * last, *temp, *temp2;
Liste *listeyeAl(Liste *root,char ch){ //Main fonksiyonundan gelen HARF ve FREKANSI baðlý listeyi kontrol ederek SIRALI bir þekilde baðlý listeye ekliyorum.
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
	Liste *temp =	 (Liste *)malloc(sizeof(Liste));
	temp -> sonraki = iter -> sonraki;
	iter -> sonraki = temp;
	temp -> harf = ch;
	return root;
}


void listele(Liste *root){ //Bu fonksiyonu baðlý listedeki hücreleri listelemek için oluþturdum.
	Liste *temp = (Liste *)malloc(sizeof(Liste));
	temp = root;
	while(temp != NULL){
		printf("\t%c --> %d\n", temp->harf, temp->frekans );
		temp = temp->sonraki;
	}
}


void ListedenSil(char harf){ //Bu fonksiyona gelen harfi kontrol edip listeden siliyorum. "Kontrol" deðiþkeni ile liste içerisini kontrol edip iþlemi yaptýrdým.
	iter = root;
	int kontrol = 0;
	if(iter == NULL){
		kontrol = -1 ;
	}
	else if(root->harf == harf){
		temp = root;
		root = root->sonraki;
		free(temp2);
		kontrol = 1;
	}
	else {
		temp = iter;
		while(temp->sonraki != NULL){
			if(temp->sonraki->harf == harf){
				kontrol = 1;
				temp2 = temp->sonraki;
				if(temp2 == last)  {
					last = temp;
				}
				temp->sonraki = temp2->sonraki;
				free(temp2);
				break;
			}
			temp = temp->sonraki;
		}
	}
	if(kontrol == 0) {
		printf("Silmek istediginiz HARF listede yok!\n");
	}
	else if(kontrol == -1){
		printf("Liste Bos!\n");
	}
	else if(kontrol == 1){
		printf("%c HARF'i listeden Silindi!\n",harf);
	}
}


int FrekansAra(char a) { //Yardýmcý fonksiyon olarak oluþturdum. Frekans kontrolü yaparken, önceden listede olan eleman var mý yok mu diye kontrol ettim. Bir bakýma liste üzerinde gezdim.
	int kontrol = 0;
	temp = root;
	if (temp == NULL) {
		kontrol = -1;
	}
	else {
		while (temp != NULL) {
			if (a == temp->harf) {
				kontrol = temp->frekans;
			}
			temp = temp->sonraki;
		}
	}
	return kontrol;
}


void FrekansKontrol(char harfler[]){ //Frekans ararken birden fazla harf girebileceðimiz için Char Dizisi oluþturdum. Girilen deðerleri CharDizisine aktarýp bu dizi de 
	int j, kontrol = 0;
	for(int i = 0; i < strlen(harfler); i++){
		int donenDeger = FrekansAra(harfler[i]);
		for(j = i; j < donenDeger+i; j++){
			if(harfler[i] == harfler[j]){
				kontrol = 1;
			}
			else{
				kontrol = 0;
				printf("Girdiginiz HARF listede var fakat tekrar adetini yanlis girdiniz! ",harfler[i]);
				break;
			}
		}
		i = j - 1;
		if(kontrol == 0){
			break;
		}
	}
	if(kontrol == 1){
		printf("Girdiginiz HARF listede var.\n");
	}
	else{
		printf("Bulunamadi!\n");
	}
}


int Arama(char arananDeger) { //Bu fonksiyon listeye yeni harf ve frekans ekleneceði zaman listede ayný harfin olup olmadýðýný kontrol ediyor.
	int kontrol = 0;
	iter = root;
	if (iter == NULL) {
		kontrol = -1;
	}
	else {
		while (iter != NULL) {
			if (arananDeger == iter->harf) {
				kontrol = 1;
			}
		iter = iter->sonraki;
		}
	}
	return kontrol;
}


void listeyeEkle(char harf,int frekans){ //Bu fonksiyon listeye kullanýcýdan aldýðý harf ve frekans eklemesi yapýyor. Ýçerisindeki Arama fonksiyonu ile kontrol ediyor. 
	if(Arama(harf)==1){
		printf("Listede bu eleman zaten var \n");	
	}
	else {
		iter = (Liste *) malloc(sizeof(Liste));
		iter->harf = harf;
		iter->frekans = frekans;
		iter->sonraki = NULL;
		Liste *iter = root;
		while(iter -> sonraki != NULL && iter -> sonraki -> harf < harf ){
			iter = iter -> sonraki;
		}
		if(iter == NULL){
			iter = (Liste*)malloc(sizeof(Liste));
			iter -> sonraki = NULL;
			iter -> harf = harf;
			iter ->frekans = frekans;
		}
		else{     
			Liste *temp = (Liste *)malloc(sizeof(Liste));
			temp -> sonraki = iter -> sonraki;
			iter -> sonraki = temp;
			temp -> harf = harf;
			temp->frekans = frekans;
		}
	}
}


int menuListesi(int secim) { //Burada menü listesini oluþturdum. Switch case ile listeledim.
	system("cls");
	int menu=secim;
	char harf, harfler[100];
	int frekans;
	if(secim==NULL){
		printf("Asagidaki menuden islemleri secebilirsiniz!\n\n");
		printf("Listelemek icin\t[1] giriniz!\n");
		printf("Eklemek icin \t[2] giriniz!\n");
		printf("Silmek icin \t[3] giriniz!\n");
		printf("Frekans arama\t[4] giriniz!\n");
		scanf("%d", &secim);
	}
	switch(secim) {
		case 1: 
			printf("Tum Liste Listelendi!\n");
			listele(root);
			printf("Menuye gitmek icin [0] giriniz: ");
			scanf("%d", &secim);
			switch(secim) {
				case 0: 
					menuListesi(secim);
				break;
			default:
				printf("Hata Olustu!");
			}
			break;
		case 2:
			printf("Eklemek istediginiz HARF'i giriniz: ");
			scanf(" %c", &harf);
			printf("Eklemek istediginiz FREKANS'i giriniz: ");
			scanf(" %d", &frekans);
			listeyeEkle(harf,frekans);
			printf("Harf ve Frekans Basariyla Eklendi!\n");
			listele(root);
			printf("Menuye gitmek icin [0] giriniz: ");
			scanf("%d", &secim);
			switch(secim) {
				case 0: 
					menuListesi(secim);
				break;
			default:
				printf("Hata Olustu!");
			}
			break;
		case 3:
			printf("Silmek istediginiz HARF'i giriniz: ");
			scanf(" %c", &harf);
			ListedenSil(harf);
			listele(root);
			printf("Menuye gitmek icin [0] giriniz: ");
			scanf("%d", &secim);
			switch(secim) {
				case 0: 
					menuListesi(secim);
				break;
			default:
				printf("Hata Olustu!");
			}
			break;
		case 4:
			printf("Kontrol etmek istediginiz HARF'i giriniz: ");
			scanf(" %s", &harfler);
			FrekansKontrol(harfler);
			listele(root);
			printf("Menuye gitmek icin [0] giriniz: ");
			scanf("%d", &secim);
			switch(secim) {
				case 0: 
					menuListesi(secim);
				break;
			default:
				printf("Hata Olustu!");
			}
			break;
		default:
			printf("Hata Olustu!");
	}
}


int main() {
	char harf;
	int frekans, kontrol = 0;
	FILE *f=fopen("dosya.txt","r");
	Liste *temp = (Liste*)malloc(sizeof(Liste)); 
	while(!feof(f)) { //Bu döngü dosyadan okunan HARF ve FREKANSLARI Baðlý Listeye gönderiyorum.
		if(kontrol == 0 ) {
			fscanf(f, "%c", &harf );
			if (harf != ',') {
				if(harf == '\n') {
					kontrol = 1;
				}
				if(harf != '\n'){
					root = listeyeAl(root, harf);
					temp = root;
				}
			}
		}
		else {
			if(temp != NULL ){
				fscanf(f, "%d", &frekans);
				fscanf(f, "%c", &harf );
				temp -> frekans = frekans;
				temp = temp -> sonraki;
			}
		}		
	}
	while(true) { //Bu döngü Menü için.
		menuListesi(NULL);
	}
}
