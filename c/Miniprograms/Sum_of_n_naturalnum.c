#include<stdio.h>

int findSumOfNNaturalNumbers(int value){
    int sum = 0 ,i=1;
    while ( i <= value)
    {
        sum+=i;
        i++;
    }
    
    return sum;
}
int main(){
    int value;
    printf("Enter the number to find its N sum :");
    scanf("%d",&value);
    printf("Sum: %d",findSumOfNNaturalNumbers(value));
}