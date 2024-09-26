#include<stdio.h>

/*Kendisine parametre olarak gelen tamsayıyı bitsel operatörler kullnarak yine 
parametre olarak gelen left road shıft yaparak yazan fonksiyon kodu*/

unsigned int kaydir(unsigned int x,unsigned int y){
	
	
	return x << y;
	//printf("sayi = %u\n",x);
}
    int main(){
    
		unsigned int sayi,shift;
    
			printf("Lutfen Pozitif Bir Sayi Giriniz: ");
    		scanf("%u",&sayi);
    		printf("Lutfen Kaydirmak Istediginiz Sayiyi Giriniz:");
    		scanf("%u",&shift);
    			
			
    		printf("\tGirdiginiz Sayi: %u\n",sayi);
    		printf("\tSayinizin %u bit kaydirilmis hali: %u\n",shift,kaydir(sayi,shift));
		
		return 0;
	}
