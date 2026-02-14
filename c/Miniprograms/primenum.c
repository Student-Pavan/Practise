#include <stdio.h>
int toFindPrimeNumber(int value)
{
    if (value <=1 )
    {
       return 0;
    }
    
  
    for (int i = 2; i <= value/2; i++)
    {
      
        if (value % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int value;
    printf("Enter The Number to Find Prime 'Or'' Not' :");
    scanf("%d",&value);

    if (toFindPrimeNumber(value) == 1)
    {
        printf("Prime Number !");
    }
    else 
        printf("Non Prime Number!");
    
}