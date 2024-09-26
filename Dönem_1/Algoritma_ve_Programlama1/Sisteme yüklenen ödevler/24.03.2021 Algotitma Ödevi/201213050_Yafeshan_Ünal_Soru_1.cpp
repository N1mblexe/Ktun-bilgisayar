#include<stdio.h>
//ebob ve ekok bulma 

int ebob(int x,int y){
	if (x == y)
        return x;
    if (x > y)
    return ebob(x - y, y);
    return ebob(x, y - x);
}

		int main(){
			int sayi1,sayi2;
			
			printf("Lutfen 1.Sayiyi Giriniz: ");
			scanf("%d",&sayi1);
			printf("Lutfen 2.Sayiyi Giriniz: ");
			scanf("%d",&sayi2);
				while(sayi1<=0 || sayi2 <=0){
					printf("Lutfen 0 dan buyuk olacak sekilde 1.sayi giriniz"); scanf("%d",&sayi1);
					printf("Lutfen 0 dan buyuk olacak sekilde 2.sayi giriniz"); scanf("%d",&sayi2);
			
			}
			printf("\tGirdiginiz %d ve %d sayilarinin EBOBU: %d",sayi1,sayi2,ebob(sayi1,sayi2));
		
		
			return 0;
		}
