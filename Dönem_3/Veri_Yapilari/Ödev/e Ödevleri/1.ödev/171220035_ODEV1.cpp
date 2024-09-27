#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

		struct polinom 
	{
	int katsayi;  
	int us; 
	struct polinom *sonraki; 
 	};
 
 		polinom *oku(FILE *fp)
 	{
 		char gecici[1];
 		polinom *metin1=(polinom*)malloc(sizeof(polinom));
 		polinom *iter1=metin1;
 		//rewind(fp)->dosyayý ilk kez açtýðýmýzda imleç direk baþta oluyor buna gerek yok.
 		
 		while(!feof(fp))
 		{
 			fscanf(fp,"%d",&iter1->katsayi);
			fscanf(fp,"%c",&gecici);
			fscanf(fp,"%d",&iter1->us);
			printf("katsayi:%d us:%d\n\n",iter1->katsayi,iter1->us);
		}
		iter1->sonraki=(polinom*)malloc(sizeof(polinom));
		iter1=iter1->sonraki; 
		iter1->sonraki=NULL;
	}
	
	polinom *Polinom_Topla(polinom *p1,polinom *p2)
	{
		polinom *p3=(polinom*)malloc(sizeof(polinom));
		polinom *root=p3; // root en baþtaki deðeri tutmak üzere oluþturuldu p3 bir sonraki kutuyu oluþturmak için nextlendi.
		while( p1!=NULL || p2!=NULL )
		{
			if(p1->us==p2->us)
			{
				p3->katsayi=p1->katsayi+p2->katsayi;
				p3->us=p1->us; //Burada p2 nin üssü de diyebilirdik farketmez zaten üsler eþit olduðu için.
				p1=p1->sonraki;
				p2=p2->sonraki;
				p3->sonraki=(polinom*)malloc(sizeof(polinom));
				p3=p3->sonraki;
			}
			
			else if(p1->us >p2->us)
			{
				p3->katsayi=p1->katsayi;
				p3->us=p1->us;
				p1=p1->sonraki;
				p3->sonraki=(polinom*)malloc(sizeof(polinom));
				p3->sonraki=NULL;
			}
			
			else if(p2->us > p1->us)
			{
				p3->katsayi=p2->katsayi;
				p3->us=p1->us;
				p2=p2->sonraki;
				p3->sonraki=(polinom*)malloc(sizeof(polinom));
				p3=p3->sonraki;
				p3->sonraki=NULL;
			}
		}
		
	}
	void dosyayaz(polinom *p)
	{
		int arti=43,eksi=45;
		char gecici='x';
		
		FILE *dosya3=fopen("polinomlar3.txt","w");
		
		while(p->sonraki!=NULL)
		{
			if(p->katsayi>=0)
			{
				fprintf(dosya3,"%d %c %d %c",p->katsayi,gecici,p->us,arti);
				p=p->sonraki;
			}
			
			else if(p->katsayi<0)
			{
				fprintf(dosya3,"%d %c %d %c",p->katsayi,gecici,p->us,eksi);
				p=p->sonraki;
			}
			
			fclose(dosya3);
		}
	}
 	
 
 
 		int main()
 {
 	FILE *dosya1=fopen("polinomlar1.txt","r");
 	polinom *p1=oku(dosya1);
 	fclose(dosya1);
 	
 	FILE *dosya2=fopen("polinomlar2.txt","r");
 	polinom *p2=oku(dosya2);
 	fclose(dosya2);
 	
 	polinom *p3=Polinom_Topla(p1,p2);
 	
 	dosyayaz(p3);
 	
 	free(p1);
 	free(p2);
 	free(p3);
 	
 	getch();
 	return 0;
 }
