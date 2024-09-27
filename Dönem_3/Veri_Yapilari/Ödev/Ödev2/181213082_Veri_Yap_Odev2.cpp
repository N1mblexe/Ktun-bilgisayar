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
Ust_Stack Yeni_Stack_Olustur(){ //Yeni Stack oluþturmak için bellekte yer ayýrýyorum.
	Ust_Stack * Yeni_Stack;
    Yeni_Stack = (Ust_Stack*) malloc(sizeof(Ust_Stack));
    Yeni_Stack -> Ust_Eleman = NULL; //en üst elemana null atýyorum.
    return (*Yeni_Stack);  
}

int Dolumu(Ust_Stack stack){ //Yiðin dolumu diye kontrol ediyorum.
	return 0;
}

void push(Ust_Stack * stack, char *film, float puan){
	IMDB * gecici = (IMDB*) malloc(sizeof(IMDB));
	if(Dolumu(*stack)){
		printf("Yigin Dolu! Ekleme Yapilamaz!\n");
	}
	else{
		strcpy(gecici -> film, film); //Gelen filmin adýný strcpy ile gecici->film'e atiyorum.
	    gecici -> puan = puan; //Gelen filmin puanýný strcpy ile gecici->puan'a atiyorum.
     	gecici -> sonraki = stack -> Ust_Eleman; //Gecici->sonrakini üst eleman olarak gösteriyorum.
	    stack -> Ust_Eleman = gecici; //üst elemaný sonrasýnda gecici olarak tanýmlýyorum.
	}
}

void pop(Ust_Stack * stack, char * film, float * puan){
	IMDB * gecici;
	if(stack -> Ust_Eleman == NULL){ //üst elemaný yoksa NULL dedim.
		printf("Yigin Bos! Cikarma Yapilamaz!\n");
	}
	else {
		gecici = stack -> Ust_Eleman; //en üsttekini geciciye atadým.
		*puan = stack -> Ust_Eleman -> puan; //düðümdeki puaný alýp deðiþkene atadým.
		strcpy(film, stack -> Ust_Eleman -> film); //düðümdeki filmi alýp deðiþkene atadým.
		stack -> Ust_Eleman = stack -> Ust_Eleman -> sonraki; //üstteki elemanla iþim bittiði için bir sonrakini gösterdim.
	    free(gecici); //temizledim.
	}
}

void sortStack(Ust_Stack * inputStack, Ust_Stack * tmpStack){
	char film[100], film2[100]; //Deðerleri yedeklerken kullanmak için oluþturdum.
    float puan, puan2;
	while(inputStack -> Ust_Eleman != NULL){ //1. yiðinda eleman olduðu sürece dönecek.
		pop(inputStack, film, &puan2); //ilk baþta düðümü çýkarýyorum.
		while(tmpStack -> Ust_Eleman != NULL && tmpStack -> Ust_Eleman -> puan > puan2){ //tmpstack en üst eleman null olana kadar ya da çýkan puan yeni puandan büyük olana kadar dönecek.
			pop(tmpStack, film2, &puan); //deðerleri yeniden çýkardým.
			push(inputStack, film2, puan); //çýkanlarý gönderdim.
		}
		push(tmpStack, film, puan2);
	}
}

void Ekrana_Yazdir(Ust_Stack stack){
	IMDB * gecici = stack.Ust_Eleman;
	if(gecici){
		while(gecici != NULL){ //yiðin null olana kadar dönecek.
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
	inputStack = Yeni_Stack_Olustur(); //1. yiðini yeni stack oluþtur fonksiyona gönderdim.
	tmpStack = Yeni_Stack_Olustur(); //2. yiðini yeni stack oluþtur fonksiyona gönderdim.
	printf("1. ADIM: \n\n");
	printf("1. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(inputStack); //Boþ yýðýný yazdýrdým.
	printf("2. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(tmpStack); //Boþ yýðýný yazdýrdým.
	printf("--------------------------------------------------------\n\n");
	FILE * dosya;
	dosya = fopen("filmler.txt", "r");
	int i = 0;
	char *okunanSatir, geciciFilmAdi[100];
	okunanSatir = fgets(geciciFilmAdi, 300, dosya); //Ýlk satýrý okudum.
	while(okunanSatir != NULL) {
		okunanSatir = strtok(geciciFilmAdi, ","); //Virgül görene kadar ilerliyor. Virgül gördüðü yerde kesiyor. okunanSatir'e atýyor.
		strcpy(listem[i].film, okunanSatir); //okunanSatir'deki deðeri struct'taki film'e atýyorum.
		okunanSatir = strtok(NULL, " "); //Kaldýðý yerden yeniden baþlayarak "Boþluk" bulana kadar ilerliyor. O kýsmý yeniden okunanSatir'e atýyor.
		sscanf(okunanSatir, "%f", &listem[i].puan); //Atanan kýsýmdaki deðeri sscanf ile struct'taki puan kýsmýna atadým. 
		okunanSatir = strtok(NULL, "\n"); //Alt Satýr görene kadar ilerletiyorum. Daha sonra yeniden okunanSatir'a atýyorum.
		push(&inputStack, listem[i].film,listem[i].puan); //Okuduðum iki ayrý deðeri stack'e gönderiyorum.
		i++;
		okunanSatir = fgets(geciciFilmAdi, 300, dosya); //Burada okunanSatir'a yeni satýrý gönderiyorum.
	}
	printf("2. ADIM: \n\n");
	printf("1. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(inputStack); //içi dolu yiðin. dosyadan okundu.
	printf("\n2. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(tmpStack); //içi boþ yiðin
	printf("--------------------------------------------------------\n\n");
	printf("3. ADIM: \n\n");
	sortStack(&inputStack,&tmpStack); //iki yýðýný sýralama fonksiyonuan gönderiyorum.
	printf("1. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(inputStack); //içi temizlenen yiðin
	printf("\n2. Yigin Listeleniyor..\n");
	Ekrana_Yazdir(tmpStack); //sýralanmiþ yiðin
}
