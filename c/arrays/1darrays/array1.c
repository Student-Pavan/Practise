// average of six subjects whic are entered by user

#include<stdio.h>


int main(){
    int subjects[6];
    float total=0,average;
 
    printf("Enter your subjects marks :\n");
    for (int i = 0; i < sizeof(subjects)/sizeof(int); i++)
    {
       scanf("%d",&subjects[i]);
    }
    for (int i = 0; i < sizeof(subjects)/sizeof(int); i++)
    {
       total+=subjects[i];
    }
    average= total/6;
    printf("Average of subjects is :");
    for (int i = 0; i < sizeof(subjects)/sizeof(int); i++)
    {
       printf("%d ",subjects[i]);
    }
    printf(": %.2f",average);

    
    
    
}