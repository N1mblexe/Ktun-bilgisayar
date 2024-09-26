#include <stdio.h>

int interpolationSearch(int* arr, size_t size, int val)
{
    size_t lower = 0;
    size_t upper = size - 1; // Fix: set upper to size - 1 for valid indexing

    size_t index = 0;

    while (lower <= upper && val >= arr[lower] && val <= arr[upper])
    {
        // Fix: handle division by zero case
        if (arr[upper] == arr[lower])
        {
            if (arr[lower] == val)
                return lower;
            else
                return -1;
        }

        // Formula for interpolation search
        index = lower + ((upper - lower) / (arr[upper] - arr[lower])) * (val - arr[lower]);

        if (val == arr[index]) return index;
        if (val < arr[index]) upper = index - 1;
        else lower = index + 1;
    }

    return -1;
}

int main()
{
    size_t size = 8;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int num = 0;

    printf("Search a number: ");
    scanf("%d", &num);

    int result = interpolationSearch(arr, size, num);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found.\n");

    return 0;
}

