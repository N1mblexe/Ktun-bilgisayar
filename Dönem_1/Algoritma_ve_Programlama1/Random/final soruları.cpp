1.soru 
#include<stdio.h>

#include<conio.h>

#include<math.h>


float cevrebul(int x1,int y1,int x2,int y2,int x3,int y3);

int main()
{

printf("%f",cevrebul(10,10,13,14,10,14));
	//test etmek i�in 3-4-5 ��geni kullandim 
	
getch();

return 0;
}

//main kismi sinavda istenmiyordu sadece altta kalan bu kisimindan sorumluyduk  

float cevrebul(int x1,int y1,int x2,int y2,int x3,int y3)
{
	
float kenar1,kenar2,kenar3;
	
	
kenar1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
kenar2=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	
kenar3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	

return kenar1+kenar2+kenar3;
}


2.soru //bu daire sorusu 

#include<stdio.h>

#include<conio.h>

#include<graphics.h>

#include<math.h>

#include<windows.h>

int main()
{

int gd=DETECT,gm;
	
initgraph(&gd,&gm,"");
	
circle(200,200,100);
	
circle(200,200,80);
	
int x=200,y=200;
	
for(int i=0;i<=360;i+=45)

{
	circle(x+90*cos(3.14/180*i),y-90*sin(3.14/180*i),10);
	}
	
getch();
	
return 0;
}


3.soru
 //asal mi
#include<stdio.h>

#include<conio.h>

#include<math.h>

void asalmi(int b1,int b2,int b3,int b4);

int main()
{
	
asalmi(1,4,5,4); 
}


void asalmi(int b1,int b2,int b3,int b4)
{
int bayrak=1;
	
int toplam;

b1=1000*b1;

b2=100*b2;

b3=10*b3;

toplam=b1+b2+b3+b4;

for(int i=2;i<toplam;i++)
{
if(toplam%i==0)
{
printf("%d sayisi asal degildir.",toplam);

bayrak=0;

break;
	}
}
	
if(bayrak==1)
{
printf("%d sayisi asaldir.",toplam);
}
}

4.soru
#include<stdio.h>

#include<conio.h>

#include<math.h>

int main()
{
int dizi[5][5];

int ebi,ebj;
int eki,ekj;
int eb=-2147483646;//iki degerede alabilecegi en k���k degeri verdim en b�y�k sayy en az bu olabilir :D:D

//kullanycynyn girdigi sayi bu sayidan b�y�k yada esit olmak zorunda

int ek=2147483646;//int sinirlarinda bu sayidan daha b�y�k bi sayy yok 
//kullanycy ne girerse girsin bu sayyya e?t yada k���k girmek zorunda
for(int i=0;i<=1;i++)
	{
for(int j=0;j<=1;j++){

printf("%d.satir %d.stunu gir: ",i,j);

scanf("%d",&dizi[i][j]);
if(eb<dizi[i][j])

{
eb=dizi[i][j];
ebi=i;
ebj=j;
}

if(ek>dizi[i][j])
{

ek=dizi[i][j];

eki=i;
	ekj=j;
	}
}
}

printf("%d.satir %d.sutunda dizinin en b�y�k elemani olan %d sayisi bulunmaktadir.\n",ebi,ebj,eb);

printf("%d.satir %d. sutunda dizinin en k�c�k elemani olan %d sayisi bulunmaktadir.\n",eki,ekj,ek);
}


5.soru


#include<stdio.h>

#include<conio.h>

#include<math.h>

int main()
{

char koruma[5];
	char metin1[5],metin2[5];// metin dizisi olu?turmanyz yada burda oldugu gibi atama yapmanyz gerekiyor
printf("birinci: ");//ilk metni istedik
	gets(metin1);//getsle aldym scnaflede alsanyz ayny sey
for(int i=0;i<5;i++)
{
koruma[i]=metin1[i];}

printf("ikinci: ");gets(metin2);

int sayac=0;
for(int i=0;i<5;i++)// ilk girilen kelimeyi indis indis dola?mak i�in bir for actyk 

{
for(int j=0;j<5;j++)//ilk kelimenin i�inde bu indisteki harften ka� tane var bulduk

{if(koruma[i]==koruma[j])
{
sayac++;
}
}

for(int k=0;k<5;k++)//metin2 i�inde bu harften ka� tane var ona baktyk{
if(koruma[i]==metin2[k])
{
sayac--;
}
}

if(sayac!=0)//eger sayac syfyrsa ilk girilen metin i�erisindeki i. indisteki harf iki kelimede de e?it sayyda bulunmaktadyr
{
break;// eger iki kelimede bir hard bile e?it sayyda yoksa bu iki kelime birbirinin anagramy olamaz 

//tek uyumsuz ko?ulda hesaplamayy byrakyryz 
}
}

int bayrak=0;

for(int i=0;i<5;i++)
{//iki kelimede harflerin yeri birbirinden farkly my diye kontrl ettik
if(koruma[i]!=metin2[i])
{
bayrak=1;
}
}
if(bayrak==1 && sayac==0)// eger hem kelimelerdeki harflerin yeri farklyysa hem de iki kelimede de her harften e?it sayyda var ise iki kelime birbirinin anagramydyr diyece?iz

{
printf("Bu iki kelime anagramdir.");
}

else
{
printf("Bu iki metin anagram degildir.");
}

getch();

return 0;
}
