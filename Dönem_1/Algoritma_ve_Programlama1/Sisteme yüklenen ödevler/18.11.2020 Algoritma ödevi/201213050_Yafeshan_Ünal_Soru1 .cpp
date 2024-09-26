#include<stdio.h>

    int main(){
    	int vize,final,butunleme;
    	float gecmenotu;
    	
         	printf("Lutfen Vize notunuzu giriniz: ");
          	scanf("%d",&vize);
          	printf("Lutfen Final notunuzu giriniz: ");
            scanf("%d",&final);
            
    	gecmenotu = (vize*4/10.0 + final*6/10.0);
    
    	if(gecmenotu >= 60){
    	 	 printf("Gectiniz\n");
    	 	 printf("Gecme Notunuz: %2.f dir",gecmenotu);
		}
		else if(gecmenotu < 60){
			printf("Kaldiniz\n");
			printf("Kalma Notunuz: %2.f dir\n",gecmenotu);
			printf("Lutfen butunleme notunuzu Giriniz :");
			scanf("%d",&butunleme);
		
		gecmenotu = (vize*4/10.0 + butunleme*6/10.0);
    	 if(gecmenotu >= 60){
    	 	 printf("Gectiniz\n");
    	 	 printf("Gecme Notunuz: %2.f dir",gecmenotu);
		}
		 else{
		 	printf("Kaldiniz\n");
		 	printf("kalma Notunuz: %2.f dir",gecmenotu);
		 }
		
	}
    	return 0;
	}
    








































    
         
