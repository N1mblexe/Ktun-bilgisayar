#include<stdio.h>
//asdl mý deðil mi fonksiyonu
int asalmi(int sayi){
	
	int i,sonuc;
	if(sayi <= 1){
		return 0;
	}
	else{
		for(i = 2 ; i < sayi ; i++){
			if(sayi % i == 0){
				return 0;
			} 
		}
	}
	
	return 1;	
}
    int main(){
  		int sayi;
		  printf("Lutfen Bir Sayi Giriniz: ");
		  scanf("%d",&sayi);
		  
		  printf("%d",asalmi(sayi));
    		
    	return 0;
	}
