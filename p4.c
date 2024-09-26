#include <stdio.h>

// Function to find the length of the string
int stringLength(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

// Function to check if the string is a palindrome
int isPalindrome(char str[])
{
    int start = 0;
    int end = stringLength(str) - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It's a palindrome
}

int main()
{
    char str[100]; // Declare a character array for the string

    printf("Enter a string: ");
    scanf("%s", str); // Input the string (no spaces allowed)

    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}