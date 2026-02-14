#include<stdio.h>

void TableMultiplication(int value){
    int i=0;
    for ( i = 1; i < 20; i++)
    {
        printf("%d * %d = %d\n",value,i ,(value*i));
    }
    
}


int main(){
    int value;
    printf("Enter Num To Find Multiplication Table :");
    scanf("%d",&value);

    (TableMultiplication(value));


}