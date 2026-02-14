// factorial of number using for loop
#include <stdio.h>

int main() {
    int f1 = 0, f2 = 1, f3, n;
    printf("Enter the number of terms to display in the Fibonacci series: ");
    scanf("%d", &n);


    if (n >= 1) printf("%d ", f1);
    if (n >= 2) printf("%d ", f2);

 
    for (int i = 3; i <= n; i++) {
        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }

    printf("\n");
    return 0;
}
