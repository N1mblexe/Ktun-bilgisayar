#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main() {
	//tekcift();
	//sifirakadareksilt();
	//girilenortalama();
	//whilemerhaba();
	//whilesonsuzortalama();
	//mukemmelsayi();
	//tausayisi();
	//fibonacci();
	//pascalucgeni();
	//switchcase();
	//switchcasedortislem();
	//charornek();
	//girilensayipolindromemu();
	//klavyedengrilenpolindromemu();
	//ogrencinovenotgirsonraaramayap();
	//ucxucmatris();
	//listeyeekleme();
	//randommatristoplama();
	//matriskosegentoplami();
	//matrisintranspozu();
	//matriscarpimi();
	//obeb();
	//matriselemantakibi();
	//okek();
	//cumleninharfleri();
	//dizisayisiralama();
	//baklavayildiz();
	//kumsaati();
	//yildizilekare();
	//sayinintersi();
	//asalsayiyazdirma();
	//girilensayiasalmi();
	//armstrong();
	//dokuzyuzdoksandokuzakadararmstrong();
	//carpimtablosu();
	//girilenyuzsayiveciftolanenbuyuksayiyibul();
	//hemarmstronghemdeasalsayi();
	//kucukharfisebuyultbuyukiseyildizkoy();
	//whilefaktoriyel();
	//test();
	//whileasalsayi();
	return 0;
}
int tekcift() {
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	if (sayi > 10 && sayi % 2 == 1) {
		printf("1. durumdur.");
	}
	else if (sayi < 10 && sayi % 2 == 0) {
		printf("2. durumdur.");
	}
	else {
		printf("Sayi 10'a esittir.");
	}
}

				int sifirakadareksilt() {
	int sayi;
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	for (int i = sayi; i>=0; i--) {
		printf("%d\n", i);
	}
}
				int girilenortalama() {
	int adet,sayi,sayac=0;
	float ortalama=0;
	printf("Kaç tane ortalama hesaplamak istiyorsunuz: ");
	scanf("%d", &adet);
	for (int i = 0; i < adet; i++) {
		printf("%d. sayiyi giriniz: ", i + 1);
		scanf("%d", &sayi);
		sayac++;
		ortalama = (float)ortalama + sayi;
		ortalama = ortalama / sayac;
		printf("Ortalama: %.2f\n", ortalama);
	}
}
				int whilemerhaba() {
	int sayi = 1;
	while (sayi <= 70) {
		printf("%d. Merhaba\n", sayi);
		sayi++;
	}
}
				int whilesonsuzortalama() {
	int sayi,sayac=0;
	float ortalama = 0;
	while (1) {
		printf("Sayi Giriniz: ");
		scanf("%d", &sayi);
		sayac++;
		ortalama = (float)ortalama + sayi;
		ortalama = (float) ortalama / sayac;
		printf("Ortalama: %.2f\n", ortalama);
	}
}
				int mukemmelsayi() {
		int sayi,toplam=0;
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayi);
		for (int i = 1; i < sayi; i++) {
			if (sayi%i == 0) {
				toplam = toplam + i;
			}
		}
		if (toplam == sayi) {
			printf("Mukemmel sayidir.");
		}
		else {
			printf("Mukemmel sayi degildir.");
		}
}
				nt tausayisi() {
	int sayi,sayac=1;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	for (int i = 1; i < sayi; i++) {
		if (sayi%i == 0) {
			sayac++;
			printf("%d,", i);
		}
	}
	printf("\nTam Bolenlerin Adeti: %d", sayac);
	if (sayi%sayac == 0) {
		printf("\n%d bir TAU sayisidir.", sayi);
	}
	else {
		printf("\n%d bir TAU sayisi degildir.", sayi);
	}
}
				int fibonacci() {
	int birinci = 0, ikinci = 1, ucuncu;
	for (int i = 1; i <= 22; i++) {
		if (i == 1) {
			printf("%d,%d,", birinci, ikinci);
		}
		ucuncu = birinci + ikinci;
		birinci = ikinci;
		ikinci = ucuncu;
		printf("%d,", ucuncu);
	}
}
				int pascalucgeni() {
	int sayi,deger1,deger2;
	printf("Kac satir olusturulsun: ");
	scanf("%d", &sayi);
	printf("\n");
	for (int i = 0; i < sayi; i++) {
		int deger2 = 1;
		for (int j = 0; j < sayi - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf(" %d ", deger2);
			deger2 = deger2 * (i - k) / (k + 1);
		}
		printf("\n");
	}
}
				int switchcase() {
	int kontrol;
	printf("Bir sayi giriniz: ");
	scanf("%d", &kontrol);
	switch (kontrol)
	{
	case 1: for (int i = 1; i <= 100; i++) {
		printf("%d,", i);
	}
		break;
	default: printf("Hatali islem!");
		break;
	}
}
				int switchcasedortislem() {
	int sayi1, sayi2, islem, sonuc;
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\nHangi islemi yaptirmak istiyorsunuz? ");
	scanf("%d", &islem);
	switch (islem)
	{
	case 1: sonuc = sayi1 + sayi2;
		printf("Toplam: %d", sonuc);
		break;
	case 2: sonuc = sayi1 - sayi2;
		printf("Cikarma: %d", sonuc);
		break;
	case 3: sonuc = sayi1 * sayi2;
		printf("Carpma: %d", sonuc);
		break;
	case 4: sonuc = sayi1 / sayi2;
		printf("Bolme: %d", sonuc);
		break;
	default: printf("Hatali islem;");
		break;
	}
}
				int charornek() {
	char cumle[100];
	gets(cumle);
	for (int i = 0; i < strlen(cumle); i++) {
		if (cumle[i]!=' ') {
			printf("%c", cumle[i]);
		}
		else {
			printf("\n");
		}
	}
}
			int girilensayipolindromemu() {
	int sayi, temp, islem = 0;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	temp = sayi;
	while (temp!=0)
	{
		islem = islem * 10;
		islem = islem + temp % 10;
		temp = temp / 10;
	}
	if (sayi == islem) {
		printf("%d bir Polindrome sayidir.", sayi);
	}
	else {
		printf("%d bir polindrome sayi degildir.", sayi);
	}
}
				int klavyedengrilenpolindromemu() {
	char kelime[50] = "";
	int kontrol;
	printf("Bir kelime giriniz: ");
	scanf("%s", &kelime);
	int uzunluk = strlen(kelime);
	kontrol = 1;
	for (int i = 0; i < uzunluk; i++)
	{
		if (kelime[i] != kelime[uzunluk - 1 - i])
			kontrol = 0;
	}
	if (kontrol==1)
		printf("Bu kelime polindromedur.");
	else
		printf("Bu kelime polindrome degildir.");
}
				int ogrencinovenotgirsonraaramayap() {
	int sayi1, sayi2, ogrno, ogrnot, arano;
	printf("Scanf ile aldigimiz sayi degerlerini diziye C'de suan aktaramadigimiz icin sabit 3 verilik bir dizi olusturduk.\n");
	char harf[3];
	int numara[3];
	for (int i = 0; i < 3; i++) {
		printf("Ogrenci numarasi giriniz: ");
		scanf("%d", &numara[i]);
		printf("Ogrencinin notunu giriniz: ");
		scanf("%s", &harf[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("Ogrencinin numarasi: %d >> Notu: %c\n", numara[i], harf[i]);
	}
	printf("Aramak istediginiz ogrenci numarasi nedir?: ");
	scanf("%d", &arano);
	for (int i = 0; i < 3; i++) {
		if (arano == numara[i]) {
			printf("Ogrenci bulundu!\nOgrenci No: %d >> Ogrenci Notu: %c", numara[i], harf[i]);
			break;
		}
	}
}
				int ucxucmatris() {
	int dizi[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d. satirin %d. elemanini giriniz: ", i + 1, j + 1);
			scanf("%d", &dizi[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (dizi[i][j] > 5) {
				printf("%dx%d >> %d\n", i, j, dizi[i][j]);
			}
		}
	}
}
				int listeyeekleme() {
	int sayi;
	int liste[10];
	for (int i = 0; i < 10; i++) {
		printf("%d. sayiyi giriniz: ", i + 1);
		scanf("%d", &liste[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d, ", liste[i]);
	}
}
				int randommatristoplama() {
	srand(time(NULL));
	int matris1[3][3], matris2[3][3], sonucmatris[3][3] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matris1[i][j] = rand() % 10;
			printf("%d ", matris1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matris2[i][j] = rand() % 10;
			printf("%d ", matris2[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sonucmatris[i][j] += matris1[i][j] + matris2[i][j];
		}
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", sonucmatris[i][j]);
		}
		printf("\n");
	}
}
int matriskosegentoplami() {
	srand(time(NULL));
	int matris[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matris[i][j] = rand() % 10;
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	printf("Soldan saga kosegenleri yazdirma\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				printf("%d,", matris[i][j]);
			}
		}
	}
	printf("\nSagdan sola kosegenleri yazdirma\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i + j ==4) {
				printf("%d,", matris[i][j]);
			}
		}
	}
}
int matrisintranspozu() {
	srand(time(NULL));
	int matris[4][3];
	int tersmatris[3][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			matris[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			tersmatris[j][i] = matris[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", tersmatris[i][j]);
		}
		printf("\n");
	}

}
int matriscarpimi() {
	int matris1[2][2], matris2[2][2], sonucmatris[2][2] = { 0 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("1. Matrisin %d. satirinin %d. elemanini giriniz: ", i + 1, j + 1);
			scanf("%d", &matris1[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("2. Matrisin %d. satirinin %d. elemanini giriniz: ", i + 1, j + 1);
			scanf("%d", &matris2[i][j]);
		}
	}
	printf("\n1. matris\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", matris1[i][j]);
		}
		printf("\n");
	}
	printf("\n2. matris\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", matris2[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				sonucmatris[i][j] += matris1[i][k] * matris2[k][j];
			}
		}
	}
	printf("\nSonuc matris\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", sonucmatris[i][j]);
		}
		printf("\n");
	}
}
int obeb() {
	int sayi1,sayi2,enkucuk,sonuc;
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	if (sayi1 < sayi2) {
		enkucuk = sayi1;
	}
	else {
		enkucuk = sayi2;
	}
	for (int i = 1; i <= enkucuk; i++) {
		if (sayi1 % i == 0 && sayi2 % i == 0) {
			sonuc = i;
		}
	}
	printf("%d,%d >> OBEB %d", sayi1, sayi2, sonuc);
}
int matriselemantakibi() {
	srand(time(NULL));
	int matris[3][3], sayac = 0,encok=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matris[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matris[i][j] > encok) {
				encok = matris[i][j];
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (encok==matris[i][j]) {
				sayac++;
			}
		}
	}
	printf("%d sayisi %d kere tekrar etti.", encok, sayac);
}
int okek() {
	int sayi1,sayi2,enbuyuk,temp1,temp2,i=2,kontrol,sonuc=1;
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	if (sayi1 > sayi2) {
		enbuyuk = sayi1;
	}
	else {
		enbuyuk = sayi2;
	}
	temp1 = sayi1;
	temp2 = sayi2;
	while (i <= enbuyuk) {
		kontrol = 0;
		if (temp1%i == 0) {
			temp1 /= i;
			kontrol++;
		}
		if (temp2%i == 0) {
			temp2 /= i;
			kontrol++;
		}
		if (kontrol != 0) {
			sonuc *= i;
		}
		if (temp1%i != 0 && temp2%i != 0) {
			i++;
		}
	}
	printf("Sonuc: %d", sonuc);
}
int cumleninharfleri() {
	char cumle[50];
	int temp;
	printf("Cumle Giriniz: ");
	gets(cumle);
	for (int i = 0; i < strlen(cumle) - 1; i++) {
		for (int j = i+1; j < strlen(cumle) - 1; j++) {
			if (cumle[i] > cumle[j]) {
				temp = cumle[i];
				cumle[i] = cumle[j];
				cumle[j] = temp;
			}
		}
	}
	printf("Cumlenin Son Hali: %s", cumle);
}
int dizisayisiralama() {
	srand(time(NULL));
	int dizi[10],temp;
	for (int i = 0; i < 10; i++) {
		dizi[i] = rand() % 10;
		printf("%d,", dizi[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (dizi[i] > dizi[j]) {
				temp = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = temp;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d,", dizi[i]);
	}
}
int baklavayildiz() {
	int bosluksayisi, yildizsayisi, boyut;
	printf("Kac satirlik yildiz olusturulsun?");
	scanf("%d", &boyut);
	if (boyut % 2 == 0) {
		boyut += 1;
	}
	bosluksayisi = boyut / 2;
	yildizsayisi = 1;
	for (int i = 0; i < boyut; i++) {
		for (int j = 0; j < bosluksayisi; j++) {
			printf(" ");
		}
		for (int j = 0; j < yildizsayisi; j++) {
			printf("*");
		}
		if (i < boyut / 2) {
			bosluksayisi--;
			yildizsayisi += 2;
		}
		else {
			bosluksayisi++;
			yildizsayisi -= 2;
		}
		printf("\n");
	}
}
int kumsaati() {
	int bosluksayisi, yildizsayisi, boyut;
	printf("Kac satirlik yildiz olusturulsun?");
	scanf("%d", &boyut);
	if (boyut % 2 == 0) {
		boyut += 1;
	}
	bosluksayisi = 0;
	yildizsayisi = boyut;
	for (int i = 0; i < boyut; i++) {
		for (int j = 0; j < yildizsayisi; j++) {
			printf("*");
		}
		if (i < boyut / 2) {
			bosluksayisi++;
			yildizsayisi -= 2;
		}
		else {
			bosluksayisi--;
			yildizsayisi += 2;
		}
		printf("\n");
		for (int j = 0; j < bosluksayisi; j++) {
			printf(" ");
		}
	}
}
int yildizilekare() {
	int sayi;
	printf("Bir Tam Sayi Degerini Giriniz :=");
	scanf("%d", &sayi);
	for (int i = 1; i <= sayi; i++){
		for (int j = 1; j <= sayi; j++){
			if (i == 1 || i == sayi || j == 1 || j == sayi) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
int sayinintersi() {
	int sayi, ters = 0;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	while (sayi!=0) {
		ters *= 10;
		ters += sayi % 10;
		sayi /= 10;
	}
	printf("%d", ters);
}
int asalsayiyazdirma() {
	int kontrol = 0,sayi;
	printf("Sayi gir:");
	scanf("%d", &sayi);
	for (int i = 2; i < sayi; i++) {
		for (int j = 2; j < i / 2; j++) {
			kontrol = 0;
			if (i%j==0) 
			{
				kontrol = 1;
				break;
			}
		}
		if (kontrol == 0) {
			printf("%d,",i);
		}
	}
}
int girilensayiasalmi() {
	int kontrol = 0, sayi;
	printf("Sayi gir:");
	scanf("%d", &sayi);
	for (int j = 2; j < sayi / 2; j++) {
		kontrol = 0;
		if (sayi%j == 0)
		{
			kontrol = 1;
			break;
		}
	}
	if (kontrol == 0) {
		printf("%d asaldir", sayi);
	}
	else {
		printf("Asal degil");
	}
}
int armstrong() {
	int sayi, temp, basdeger, sonuc = 0;
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	temp = sayi;
	while (temp > 0) {
		basdeger = temp % 10;
		sonuc += basdeger * basdeger*basdeger;
		temp /= 10;
	}
	if (sayi == sonuc) {
		printf("%d armstrongtur.", sayi);
	}
	else {
		printf("%d armstrong degildir.", sayi);
	}
}
int dokuzyuzdoksandokuzakadararmstrong() {
	int temp, deger, sonuc = 0;
	for (int i = 100; i <= 999; i++) {
		temp = i;
		while (temp > 0) {
			deger = temp % 10;
			sonuc += deger * deger*deger;
			temp /= 10;
		}
		if (i == sonuc) {
			printf("%d,", sonuc);
		}
		sonuc = 0;
	}
}
int carpimtablosu() {
	int sonuc;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			sonuc = i * j;
			printf("%d x %d = %d",i,j,sonuc);
			printf("\n");
		}
		printf("\n");
	}
}
int girilenyuzsayiveciftolanenbuyuksayiyibul() {
	srand(time(NULL));
	int dizi[100], enbuyuk = 0, sayac = 0;;
	for (int i = 0; i < 100; i++) {
		dizi[i] = rand() % 100;
	}
	for (int i = 0; i < 100; i++) {
		printf("%d,", dizi[i]);
	}
	for (int i = 0; i < 100; i++) {
		if (dizi[i] > enbuyuk && dizi[i]%2==0) {
			enbuyuk = dizi[i];
		}
	}
	printf("\n\n");
	for (int i = 0; i < 100; i++) {
		if (enbuyuk == dizi[i]) {
			sayac++;
			printf("%d,", enbuyuk);
		}
	}
	printf("\n\n%d defa ekrana yazildi!",sayac);
}
int hemarmstronghemdeasalsayi() {
	int kontrol = 0, sayi;
	for (int i = 100; i < 1000; i++) {
		for (int j = 2; j < i / 2; j++) {
			kontrol = 0;
			if (i%j == 0) {
				kontrol = 1;
				break;
			}
		}
		if (kontrol == 0) {
			int temp, basdeger, sonuc = 0;
			temp = i;
			while (temp > 0) {
				basdeger = temp % 10;
				sonuc += basdeger * basdeger*basdeger;
				temp /= 10;
			}
			if (i == sonuc) {
				printf("Duruma Uydu.");
			}
			else {
				printf("Duruma Uymadi.");
				break;
			}

		}
	}
}
int kucukharfisebuyultbuyukiseyildizkoy() {
	char harf[100];
	int i = 0;
	printf("Bir kelime giriniz: ");
	gets(harf);
	int fark = 'a' - 'A';
	while (harf[i] != '\0') {
		if (harf[i] >= 'A' && harf[i] <= 'Z') {
			harf[i] = 42;
		}
		else if (harf[i] >= 'a' && harf[i] <= 'z') {
			harf[i] -= fark;
		}
		printf("%c", harf[i]);
		i++;
	}
}
int whilefaktoriyel() {
	int sayi, i = 1, sonuc = 1;
	printf("Faktoriyeli giriniz: ");
	scanf("%d", &sayi);
	while (sayi >= i) {
		sonuc = sonuc * i;
		i++;

	}
	printf("Sonuc: %d", sonuc);
}
int test() {
	int matris[5][5];
	int toplam = 0;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matris[i][j] = rand() % 10;
			printf(" %d ", matris[i][j]);
			if (i == j) toplam += matris[i][j];
		}
		for (int j = 0; j < 5; j++) {
			if (i == j) toplam += matris[j][i];
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == (5 - 1) / 2 && j == (5 - 1) / 2) {
				printf("%d", matris[i][j]);
			}
		}
	}
	printf("\n\n\n Diyagonal Toplamý....:%d", toplam);
	getch();
	return 0;

}
int whileasalsayi() {
	int sayi = 0, kontrol = 0;
	while (sayi < 100)
	{
		kontrol = 0;
		sayi++;
		for (int i = 2; i < sayi / 2; i++) {
			if (sayi%i == 0) {
				kontrol = 1;
				break;
			}
		}
		if (kontrol == 0) {
			printf("%d,", sayi);
		}
	}
}
