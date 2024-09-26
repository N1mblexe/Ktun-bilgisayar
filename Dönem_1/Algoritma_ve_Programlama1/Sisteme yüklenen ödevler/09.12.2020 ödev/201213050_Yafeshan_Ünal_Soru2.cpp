#include<stdio.h>
/*
													* * * * *
													* ?	? ?	*
													* ?	# ?	*
													* ?	? ?	*
													* * * * *
*/				
 int main(){
   	int dizi[5][5]; 
   	int i,j;
   		for(i = 0 ; i < 5 ; i++){
   			
   			for(j = 0 ; j < 5 ; j++){
   				
   				if(i == 0 || i == 4 || j == 0 || j == 4)
   				
				   dizi[i][j]=printf("* ");
				
			 		else if( i == 1 || i == 3 || j == 1 || j == 3)dizi[i][j]=printf("? ");
			 		
			    		else dizi[i][j]=printf("# ");
			    		
			}
			printf("\n");
		}
		return 0;
 }
