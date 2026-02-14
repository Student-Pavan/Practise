#include<stdio.h>
int main(){
    int n=4;
    

    for (int  i = 1; i <= n; i++)
    {
      for (int j = 2; j <=i; j++)
      {
        printf(" ");
      }
      for (int j = 4;  j>=i ; j--)
      {
        printf("%d",i);
       
      }
      
      
      printf("\n");
    }
    
}