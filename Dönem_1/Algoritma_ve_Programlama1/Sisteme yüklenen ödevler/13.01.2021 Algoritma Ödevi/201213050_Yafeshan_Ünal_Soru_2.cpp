#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define SIZE    10
 
int main(){
    int a[SIZE],b[SIZE],c[SIZE + SIZE];
    int index1 = 0, index2 = 0,k,eb;
 	 srand(time(0));
	a[0] = rand() % 10;
    b[0] = rand() % 10;
 	for (k = 1; k < SIZE; ++k) {
        a[k] = rand() % 10 + a[k - 1];
        b[k] = rand() % 10 + b[k - 1];
    }
      for (k = 0; k < SIZE + SIZE; ++k)
        if (index1 == SIZE)
            c[k] = b[index2++];
        else if (index2 == SIZE)
            c[k] = a[index1++];
        else {
            if (a[index1] < b[index2])
                c[k] = a[index1++];
            else
                c[k] = b[index2++];
        }   
		for(int y = 0 ; y < 20 ; y++){
 				printf("%d\n",c[y]);
		 }
 			
			 

    return 0;
}
