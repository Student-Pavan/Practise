#include<stdio.h>
int main(){
    int i,number[10],largest=0,smallest=0;
    printf("Enter the !0 numbers to find Smallest and largest Number: ");
    for ( i = 0; i < 10; i++)
    {
      scanf("%d",&number[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (largest<number[i])
        {
            largest=number[i];
        }
        
    }
 
    smallest = largest;

     for ( i = 0; i < 10; i++)
    {
        if (smallest>number[i])
        {
            smallest=number[i];
        }
        
    }

    printf("Smallest Number :%d\n",smallest);
    printf("Largest Number :%d",largest);
    
    
}