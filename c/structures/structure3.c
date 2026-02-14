#include <stdio.h>
#include <string.h> 

int main()
{
    
    struct restaurant
    {
        struct beverages
        {
            char first[20];
            char second[20];
            char third[20];
        } b1;
        struct desserts
        {
            char first[20];
            char second[20];
            char third[20];
        } d1;
    };

    
    struct restaurant myRestaurant;

    struct beverages *bevPtr = &myRestaurant.b1;
    struct desserts *desPtr = &myRestaurant.d1;

    
    strcpy(bevPtr->first, "Cool drinks");
    strcpy(bevPtr->second, "Coffee");
    strcpy(bevPtr->third, "Tea");

    strcpy(desPtr->first, "Ice cream");
    strcpy(desPtr->second, "Cake");
    strcpy(desPtr->third, "Pie");

    
    printf("Beverages:\n");
    printf("1. %s\n", bevPtr->first);
    printf("2. %s\n", bevPtr->second);
    printf("3. %s\n", bevPtr->third);

    printf("\nDesserts:\n");
    printf("1. %s\n", desPtr->first);
    printf("2. %s\n", desPtr->second);
    printf("3. %s\n", desPtr->third);

    return 0;
}
