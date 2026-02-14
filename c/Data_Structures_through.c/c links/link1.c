#include <stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node *pre_link;
        struct node *post_link;
    };
    struct node ob1;
    struct node ob2;
    struct node ob3;

    ob1.pre_link = NULL;
    ob1.post_link = NULL;
    ob1.data = 10;

    ob2.pre_link = NULL;
    ob2.post_link = NULL;
    ob2.data = 20;

    ob3.pre_link = NULL;
    ob3.post_link = NULL;
    ob3.data = 30;

    ob1.pre_link = &ob3;
    ob1.post_link = &ob2;

    ob2.pre_link = &ob1;
    ob2.post_link = &ob3;

    ob3.pre_link = &ob2;
    ob3.post_link = &ob1;

    printf("%d\t", ob1.data);
    printf("%d\t", ob1.post_link->data);
    printf("%d\t\n", ob1.pre_link->data);

    printf("%d\t", ob2.pre_link->data);
    printf("%d\t", ob2.data);
    printf("%d\t\n", ob2.post_link->data);

    printf("%d\t", ob3.post_link->data);
    printf("%d\t", ob3.pre_link->data);
    printf("%d\t\n", ob3.data);
}