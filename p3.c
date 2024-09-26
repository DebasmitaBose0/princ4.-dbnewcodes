#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0; // Flag to check if a swap occurs during this pass

        // Perform a pass of the Bubble Sort
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap adjacent elements if they're in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Mark that a swap occurred
            }
        }

        // If no swap happened, the array is already sorted
        if (swapped == 0)
        {
            break; // Exit the loop early
        }
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}