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

    strcpy(myRestaurant.b1.first, "Cool drinks");
    strcpy(myRestaurant.b1.second, "Coffee");
    strcpy(myRestaurant.b1.third, "Tea");

   
    strcpy(myRestaurant.d1.first, "Ice cream");
    strcpy(myRestaurant.d1.second, "Cake");
    strcpy(myRestaurant.d1.third, "Pie");


    printf("Beverages:\n");
    printf("1. %s\n", myRestaurant.b1.first);
    printf("2. %s\n", myRestaurant.b1.second);
    printf("3. %s\n", myRestaurant.b1.third);

    printf("\nDesserts:\n");
    printf("1. %s\n", myRestaurant.d1.first);
    printf("2. %s\n", myRestaurant.d1.second);
    printf("3. %s\n", myRestaurant.d1.third);

    return 0;
}
