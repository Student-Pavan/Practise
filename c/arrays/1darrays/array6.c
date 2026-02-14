#include<stdio.h>
int main(){
    int i,j,number[10],temp=0;
    printf("Enter the !0 numbers to sort the array : ");
    for ( i = 0; i < 10; i++)
    {
      scanf("%d",&number[i]);
    }
    for ( i = 0; i < 10; i++)
    {
       for ( j = 0; j < 10; j++)
       {
            if (number[i]<number[j])
            {
               temp = number[i];
               number[i]=number[j];
               number[j]=temp;
            }
            
       }
       
    }
    printf("Sorted Array :");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",number[i]);
    }
    
 
  

  
    
}