#include <stdio.h>

void moveToFront(int* arr , size_t index)
{
	int temp
}

int sequentialSearch(const int* arr , size_t size , const int val)
{
	size_t index = 0;
	int temp = arr[index];
	while(index < size)
	{
		if(temp == val) 
		{
			moveToFront(arr , index);
			return index;
		}
		temp = arr[++index];
	}
	return -1;

}


int main()
{

}
