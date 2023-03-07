#include <stdio.h>
#include <string.h>

const char *PROVINCES[] = {"Alberta", "British Columbia", "Manitoba", "New Brunswick", "Newfoundland and Labrador", "Nova Scotia", "Ontario", "Prince Edward Island", "Quebec", "Saskatchewan"};

void print_provinces()
{
    int province_size = sizeof(PROVINCES)/sizeof(PROVINCES[0]);
    for (int iterator = 0; iterator < province_size; iterator++)
    {
        printf("number of letters in %s is %d", *PROVINCES, province_size);
    }
    
    //TODO:: Write a for loop that iterates over the PROVINCES array and prints out how many letters is contained in each

}