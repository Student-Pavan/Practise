#include <stdio.h>
int main()
{
    // pointers to structures

    struct student
    {
        char sname[20];
        float marks;
        int sno;
    };

    struct student s1;

    struct student *ptr;

    printf("Enter your Name , marks , sno :");
    scanf("%19s %f %d", &s1.sname, &s1.marks, &s1.sno);

    ptr = &s1;

    printf("the student details are : ");
    printf("name:%s\n", ptr->sname);
    printf("marks:%f\n", ptr->marks);
    printf("sno:%d\n", ptr->sno);
}