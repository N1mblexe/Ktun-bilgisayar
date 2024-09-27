#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct IMDB yeni_IMDB;
struct IMDB {
	float puan;
	char film[100];
	struct IMDB * sonraki;
} imdb;
typedef struct{
    IMDB * Ust_Eleman;
} Ust_Stack;
IMDB listem[100];
Ust_Stack Yeni_Stack_Olustur(){ //Yeni Stack olu�turmak i�in bellekte yer ay�r�yorum.
	Ust_Stack * Yeni_Stack;
    Yeni_Stack = (Ust_Stack*) malloc(sizeof(Ust_Stack));
    Yeni_Stack -> Ust_Eleman = NULL; //en �st elemana null at�yorum.
    return (*Yeni_Stack);  
}

int Dolumu(Ust_Stack stack){ //Yi�in dolumu diye kontrol ediyorum.
	return 0;
}

void push(Ust_Stack * stack, char *film, float puan){
	IMDB * gecici = (IMDB*) malloc(sizeof(IMDB));
	if(Dolumu(*stack)){
		printf("Yigin Dolu! Ekleme Yapilamaz!\n");
	}
	else{
		strcpy(gecici -> film, film); //Gelen filmin ad�n� strcpy ile gecici->film'e atiyorum.
	    gecici -> puan = puan; //Gelen filmin puan�n� strcpy ile gecici->puan'a atiyorum.
     	gecici -> sonraki = stack -> Ust_Eleman; //Gecici->sonrakini �st eleman olarak g�steriyorum.
	    stack -> Ust_Eleman = gecici; //�st eleman� sonras�nda gecici olarak tan�ml�yorum.
	}
}

void pop(Ust_Stack * stack, char * film, float * puan){
	IMDB * gecici;
	if(stack -> Ust_Eleman == NULL){ //�st eleman� yoksa NULL dedim.
		printf("Yigin Bos! Cikarma Yapilamaz!\n");
	}
	else {
		gecici = stack -> Ust_Eleman; //en �sttekini geciciye atad�m.
		*puan = stack -> Ust_Eleman -> puan; //d���mdeki puan� al�p de�i�kene atad�m.
		strcpy(film, stack -> Ust_Eleman -> film); //d���mdeki filmi al�p de�i�kene atad�m.
		stack -> Ust_Eleman = stack -> Ust_Eleman -> sonraki; //�stteki elemanla i�im bitti�i i�in bir sonrakini g�sterdim.
	    free(gecici); //temizledim.
	}
}

void sortStack(Ust_Stack * inputStack, Ust_Stack * tmpStack){
	char film[100], film2[100]; //De�erleri yedeklerken kullanmak i�in olu�turdum.
    float puan, puan2;
	while(inputStack -> Ust_Eleman != NULL){ //1. yi�inda eleman oldu�u s�rece d�necek.
		pop(inputStack, film, &puan2); //ilk ba�ta d���m� ��kar�yorum.
		while(tmpStack -> Ust_Eleman != NULL && tmpStack -> Ust_Eleman -> puan > puan2){ //tmpstack en �st eleman null olana kadar ya da ��kan puan yeni puandan b�y�k olana kadar d�necek.
			pop(tmpStack, film2, &puan); //de�erleri yeniden ��kard�m.
			push(inputStack, film2, puan); //��kanlar� g�nderdim.
		}
		push(tmpStack, film, puan2);
	}
}

void Ekrana_Yazdir(Ust_Stack stack){
	IMDB * gecici = stack.Ust_Eleman;
	if(gecici){
		while(gecici != NULL){ //yi�in null olana kadar d�necek.
			printf("%.1f - %s\n", gecici -> puan, gecici -> film);
			gecici = gecici -> sonraki;
		}
	}
	else {
		printf("Yigin Bos!\n\n");
	}

}
int main() {
	Ust_Stack inputStack, tmpStack;
	inputStack = Yeni_Stack_Olustur(); //1. yi�ini yeni stack olu�tur fonksiyona g�nderdim.
	tmpStack = Yeni_Stack_Olustur(); //2. yi�ini yeni stack olu�tur fonksiyona g�nderdim.
	printf("1. ADIM: \n\n");
	printf("1. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(inputStack); //Bo� y���n� yazd�rd�m.
	printf("2. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(tmpStack); //Bo� y���n� yazd�rd�m.
	printf("--------------------------------------------------------\n\n");
	FILE * dosya;
	dosya = fopen("filmler.txt", "r");
	int i = 0;
	char *okunanSatir, geciciFilmAdi[100];
	okunanSatir = fgets(geciciFilmAdi, 300, dosya); //�lk sat�r� okudum.
	while(okunanSatir != NULL) {
		okunanSatir = strtok(geciciFilmAdi, ","); //Virg�l g�rene kadar ilerliyor. Virg�l g�rd��� yerde kesiyor. okunanSatir'e at�yor.
		strcpy(listem[i].film, okunanSatir); //okunanSatir'deki de�eri struct'taki film'e at�yorum.
		okunanSatir = strtok(NULL, " "); //Kald��� yerden yeniden ba�layarak "Bo�luk" bulana kadar ilerliyor. O k�sm� yeniden okunanSatir'e at�yor.
		sscanf(okunanSatir, "%f", &listem[i].puan); //Atanan k�s�mdaki de�eri sscanf ile struct'taki puan k�sm�na atad�m. 
		okunanSatir = strtok(NULL, "\n"); //Alt Sat�r g�rene kadar ilerletiyorum. Daha sonra yeniden okunanSatir'a at�yorum.
		push(&inputStack, listem[i].film,listem[i].puan); //Okudu�um iki ayr� de�eri stack'e g�nderiyorum.
		i++;
		okunanSatir = fgets(geciciFilmAdi, 300, dosya); //Burada okunanSatir'a yeni sat�r� g�nderiyorum.
	}
	printf("2. ADIM: \n\n");
	printf("1. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(inputStack); //i�i dolu yi�in. dosyadan okundu.
	printf("\n2. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(tmpStack); //i�i bo� yi�in
	printf("--------------------------------------------------------\n\n");
	printf("3. ADIM: \n\n");
	sortStack(&inputStack,&tmpStack); //iki y���n� s�ralama fonksiyonuan g�nderiyorum.
	printf("1. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(inputStack); //i�i temizlenen yi�in
	printf("\n2. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(tmpStack); //s�ralanmi� yi�in
}
