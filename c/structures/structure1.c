#include <stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[50];
        int total;
    };
    struct student one = {1, "Pavan", 927};
    struct student two = {2, "sravan", 457};
    struct student three = {3, "Reena", 678};

    printf("Details of First student :\n");
    printf("Rollno: %d\n", one.roll);
    printf("Name: %s\n", one.name);
    printf("marks: %d\n", one.total);

    printf("Details of  Second student :\n");
    printf("Rollno: %d\n", two.roll);
    printf("Name: %s\n", two.name);
    printf("marks: %d\n", two.total);

    printf("Details of Third student :\n");
    printf("Rollno: %d\n", three.roll);
    printf("Name: %s\n", three.name);
    printf("marks: %d\n", three.total);
}