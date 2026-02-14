// printing even and odd numbers 

#include<stdio.h>
int main(){
    int even[50],odd[50];
    int i=1,j=0,k=0;

    for ( i = 1; i <= 100 ; i++)
    {
        if (i%2 == 0)
        {
            even[j++]=i;
        }
        else 
            odd[k++]=i;
        
    }
    printf("\nEven Numbers Are :");
    for ( i = 0; i < sizeof(even)/sizeof(int); i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("\nOdd Numbers Are :");
    for ( i = 0; i < sizeof(odd)/sizeof(int); i++)
    {
        printf("%d ",odd[i]);
    }
    

}