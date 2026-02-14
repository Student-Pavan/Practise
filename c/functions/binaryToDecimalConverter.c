#include<stdio.h>
int binaryToDecimalConverter(int binary){

    int decimal =0;
    int power =1 ;
    while (binary > 0)
    {
     int reminder = binary % 10;
     binary /= 10;
     decimal += reminder*power;
     power = power * 2;

    }
    return decimal;
}
int main(){
    int binary=110;
    
    printf("%d",binaryToDecimalConverter(binary));
}