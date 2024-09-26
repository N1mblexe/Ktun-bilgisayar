#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

	int main(){
		FILE *fp = fopen("sayilar.txt","w");
		if(fp == NULL){
			printf("Dosya Acma Hatasi");
		}
		srand(time(0));
		for(int i = 0 ; i < 100; i++){
		fprintf(fp,"%d\n",rand()%1000);
		}
		fclose(fp);
		
	return 0;
	getch();

}
