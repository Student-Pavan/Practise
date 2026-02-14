#include<stdio.h>
int main(){
    int number,sum=0, lastdigit;
    printf("Enter your Number to find sum of digits :");
    scanf("%d",&number);

    for (; number!=0; number/=10)
    {
        lastdigit = number%10;
        printf("%d ",lastdigit);
}
    }
    