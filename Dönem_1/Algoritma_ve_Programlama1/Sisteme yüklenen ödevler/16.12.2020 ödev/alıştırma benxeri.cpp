#include<stdio.h>
#include<conio.h>

// & AMPERSANT DEÐÝÞKENÝN ADRES BÝLGÝSÝNÝNÝ VERÝYOR
// * ADRESTEKÝ DEÐERÝ BÝZE GÖSTREÝYOR
     int main(){
     
	 int i = 10;	
     int *p = &i;
     printf("%p\n",p);
     printf("%d",*p);
     return 0;
	 }
