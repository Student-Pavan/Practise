#include <stdio.h>
int main()
{
    int number;
    printf("Enter number to find Palindrome or not :");
    scanf("%d", &number);

    int Resversednumber = 0, Reminder,Originalnumber=number;

    while (Originalnumber != 0)
    {
        Reminder = Originalnumber % 10; // gives us the last digit of the numbe
        Resversednumber = Resversednumber * 10 + Reminder; //gets reversed bylast digit
        Originalnumber = Originalnumber / 10; //removes lastdigit 
    }
    if (Resversednumber == number)
    {
        printf("Given number is palindrome");
    }
    else
        printf("Given number is Not palindrome");
}