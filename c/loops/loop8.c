#include<stdio.h>
int main(){
    int n=4;
    

    for (int  i = 1; i <= n; i++)
    {
        for (int j= 4; j >= i; j--)
        {
            printf(" ",j);
        }
        for (int j = 1; j <=i; j++)
        {
        printf("%d",j);
        }
        for (int j = i+1;  j>0 ; j--)
        {
        printf("%d",j);
        
        }
        
      
      printf("\n");
    }
    

      
}