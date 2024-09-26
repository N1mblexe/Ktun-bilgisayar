#include <stdio.h>

int sequentialSearch(const int* arr , size_t size , const int val)
{
	size_t index = 0;
	int temp = arr[index];
	while(index < size)
	{
		if(temp == val) return index;
		temp = arr[++index];
	}
	return -1;

}

int main()
{
	size_t arrSize = 6;
	int arr[] = {1 , 2 ,3 , 4, 5, 6};


	int number = 0;
	printf("Search a number:");
	scanf("%d" , &number);

	printf("%d\n" , sequentialSearch(arr , arrSize , number));
}
