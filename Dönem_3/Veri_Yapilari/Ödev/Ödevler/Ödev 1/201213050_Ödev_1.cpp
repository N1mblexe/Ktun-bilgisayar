#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Liste{
	int derece;
	int katsayi;
	Liste *next;

};

	int main(){
		FILE *file;
		file = fopen("ödev.txt","w");

		int choise, userDerece, userKatsayi, count=-1, x, result=0,lastResult=0;
		bool flag=0;
		Liste *first=NULL;
		Liste *ptr=NULL;
		Liste *temp=NULL;
		Liste *temp1=NULL;
		
		while(1){
			printf("\n1-Ekleme\n2-Silme\n3-Yazdir\n4-Hesapla\n5-Cikis\nYapmak Istediginiz islemin numarasini giriniz:");
			scanf("%d",&choise);
			
			if(choise == 1){
				printf("\nDereceyi Giriniz:");
				scanf("%d",&userDerece);
				printf("\nKatsayiyi Giriniz:");
				scanf("%d",&userKatsayi);
				
				if(first == NULL){
					first = (struct Liste*)(malloc(sizeof(struct Liste)));	
					first->derece = userDerece;
					first->katsayi = userKatsayi;
					first->next = NULL;
					ptr = first;
				}
				else{
					ptr = first;
					flag = 0;
					while(ptr != NULL){
						
						if(userDerece == ptr->derece){
							printf("Esitlik ALgilandi Lutfen Var Olmayan Bir Derece Giriniz:\n");
							flag = 1;
						}
					ptr = ptr->next;
					
					}
					if(flag == 1){
						continue;
					}
					
				if(userDerece > first->derece){
					temp = (struct Liste*)(malloc(sizeof(struct Liste)));	
					temp->derece = userDerece;
					temp->katsayi = userKatsayi;
					temp->next = first;
					first = temp;
					temp = NULL;
				}
				else if(userDerece < first->derece){
					ptr = first;
				
					while(1){
						if(ptr->next == NULL){
						temp = (struct Liste*)(malloc(sizeof(struct Liste)));	
							temp->derece = userDerece;
							temp->katsayi = userKatsayi;
							temp->next = NULL;
							ptr->next = temp;
							break;
						}
						if(userDerece > ptr->next->derece){
						temp = (struct Liste*)(malloc(sizeof(struct Liste)));	
							temp->derece = userDerece;
							temp->katsayi = userKatsayi;
							
							temp1 = ptr->next;
							ptr->next = temp;
							temp->next = temp1;
							temp1 = NULL;
							break;
						}
						ptr = ptr->next;
					}
				}
			}
		}
		else if(choise == 2){
			printf("Silmek istediginiz derece bilgisini giriniz:");
			scanf("%d",&userDerece);
			ptr = first;
			
			while(ptr->next != NULL){
				if(ptr->derece == userDerece && ptr == first){
					first = ptr->next;
					free(ptr);
					ptr = first;
					break;
				}
				else if(ptr->next->derece == userDerece){
					temp = ptr->next;
					ptr->next = ptr->next->next;
					free(temp);
					break;
				}
				ptr=ptr->next;
			}
		}
		else if(choise == 3){
			ptr = first;
			count = 0;
			while(ptr != NULL){
				printf(" %d %d\n",ptr->derece,ptr->katsayi);
				ptr = ptr->next;
				count++;
			}
			ptr = first;
			while(ptr != NULL){
				if(ptr->derece == 0 || ptr->derece == 1){
					printf("%d\n",ptr->katsayi);
				}
				else{
					printf("%dX^%d",ptr->katsayi,ptr->derece);
				}
				if(count > 1){
					printf(" + ");
					count--;
				}
				ptr = ptr->next;
			}
			printf("\nProgram Sonlanmistir...\n");
		}
		else if(choise == 4){
			printf("Polinom hesabi icin x degiskenini giriniz:");
			scanf("%d",&x);
			ptr = first;
			while(ptr != NULL){
				result = ((pow(x,ptr->derece)) * ptr->katsayi);
				printf("%d*%d^%d = Sonuc:%d\n",ptr->katsayi,x,ptr->derece,result);
				lastResult += result;
				ptr = ptr->next;
				
			}
			printf("Toplam Sonuc:%d",lastResult);
			
			}
		else if(choise == 5){
			ptr = first;
			while(ptr != NULL){
				fprintf(file,"Derece %d Katsayý %d\n",ptr->derece,ptr->katsayi);
				ptr = ptr->next;

			}
		break;
		printf("Program Sona Ermistir Tesekkür Ederiz...");
		fclose(file);

		}
}

		return 0;
	
}

