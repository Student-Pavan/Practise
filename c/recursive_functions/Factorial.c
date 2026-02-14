#include<stdio.h>
int factorial(int num){
    if (num<=1)
    {
       return 1;

    }
    return num*factorial(num-1);
    
}

int main(){
    int Num;
    printf("Enter Number To find Its Factorial :\n");
    scanf("%d",&Num);

    printf("Factorial Of :%d ::-> %d",Num,factorial(Num));
}