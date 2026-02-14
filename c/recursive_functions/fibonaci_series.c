#include<stdio.h>
int fibonacci(int num){
    if (num<=1)
    {
       return 0;

    }
    if (num<=2)
    {
       return 1;

    }
    return fibonacci(num-1)+fibonacci(num-2);
    
}

int main(){
    int Num;
    printf("Enter Number To find Fibonacci series :\n");
    scanf("%d",&Num);

    printf("Fibonacci Of :%d ::-> %d ",Num,fibonacci(Num));
}