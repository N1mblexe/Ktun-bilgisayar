#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

/*0 ile 100 aras�nda rastgele 100 say�dan 5.bitleri 0 olan�n 4.bitini 1 yap sayilar.txt ye kaydet
5. bitleri 1 olan say�lar�n da 3.bitini o yap sayilar1.txt ye kaydet*/

    int main(){
    	FILE *fp2 = fopen("sayilar.txt","w");
    	FILE *fp1 = fopen("sayilar0.txt","w");
    	FILE *fp = fopen("sayilar1.txt","w");
    	int sayi[100];
		srand(time(0));
    	for(int i=0;i<100;i++){
    	sayi[i] = rand()%100;
    		fprintf(fp2,"%d\n",sayi[i]);
    	}
    	
		
		for(int a=0;a<100;a++){
    		if(sayi[a] & (1<<5) == (1<<5)){
    			sayi[a] &= ~(1<3);
    			fprintf(fp,"%d\n",sayi[a]);
    		}
    		else{
				sayi[a] &= ~(0<<4);
				fprintf(fp1,"%d\n",sayi[a]);
			}
	
}
	
	return 0;
}
