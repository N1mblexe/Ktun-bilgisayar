#include<stdio.h>
#include<conio.h>

     int main(){
         int sayi1;
         int sayi2;
         
         printf("Lütfen sayi1 i giriniz:");
         scanf("%d",&sayi1);
         printf("Lütfen ikinci sayiyi giriniz:");
         scanf("%d",&sayi2);
         
         if (sayi1 < sayi2){
                   printf("%d < %d",sayi1,sayi2);
                   }
                   
                   else if(sayi1 == sayi2){
                        printf("%d = % d ",sayi1,sayi2);
                        
                        }
                        
                        else if (sayi1 > sayi2){
                             
                             printf("%d > %d ",sayi1,sayi2);
        
         
         
         
         }
         
         getch();
         return 0;
}
