// Prabhat sir has come into the class, sir wants to check that  Debasmita is present in the class or not.WAP in C by binary search
#include <stdio.h>
#include <string.h>

// Function to perform binary search
int binarySearch(char names[][20], int n, char target[])
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int cmp = strcmp(names[mid], target);

        if (cmp == 0)
            return mid; // Name found at index mid
        else if (cmp < 0)
            low = mid + 1; // Move to the right half
        else
            high = mid - 1; // Move to the left half
    }
    return -1; // Name not found
}

int main()
{
    int n = 5; // Number of students
    char names[5][20] = {"Abhijit", "Anjali", "Debasmita", "Kiran", "Prabhat"};
    char target[20];

    printf("Enter the name of the student to search: ");
    scanf("%s", target);

    // Search for the student using binary search
    int result = binarySearch(names, n, target);

    if (result != -1)
        printf("%s is present in the class at position %d.\n", target, result + 1);
    else
        printf("%s is not present in the class.\n", target);

    return 0;
}