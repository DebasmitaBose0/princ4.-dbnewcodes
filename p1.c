// A person wants to go from Sealdah to Barasat and wants to check Madhyamgram is there or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char station[20]; // Array size should be large enough to hold the station name

    printf("Enter the station name: ");
    scanf("%s", station);

    if (strcmp(station, "Madhyamgram") == 0)
    {
        printf("Destination found\n");
    }
    else
    {
        printf("Destination not found\n");
    }

    return 0;
}
