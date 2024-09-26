#include <stdio.h>

int binarySearch(int* arr , size_t size , int val)
{
	size_t upperIndex = size;
	size_t lowerIndex = 0;
	size_t currIndex = (lowerIndex + upperIndex) / 2;

	while(lowerIndex <= upperIndex)
	{
		if(arr[currIndex] == val)
			return currIndex;

		if(val > arr[currIndex])
			lowerIndex = currIndex + 1;
		else
			upperIndex = currIndex -1;

		currIndex = (int)((lowerIndex + upperIndex) / 2);
	}
	return -1;
}

int main()
{
	const size_t size = 7;
	int arr[] = { 0 , 1 , 2 ,3 , 4, 5, 6 };

	int temp = 0;

	printf("Search a val:");
	scanf("%d" , &temp);

	printf("%d\n" , binarySearch(arr , size , temp));

	return 0;
}
