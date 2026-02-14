#include <stdio.h>

int main() {
    int two[50], three[50], four[50], five[50], six[50], seven[50], eight[50], nine[50], ten[50];
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            two[a++] = i;
        }
        if (i % 3 == 0) {
            three[b++] = i;
        }
        if (i % 4 == 0) {
            four[c++] = i;
        }
        if (i % 5 == 0) {
            five[d++] = i;
        }
        if (i % 6 == 0) {
            six[e++] = i;
        }
        if (i % 7 == 0) {
            seven[f++] = i;
        }
        if (i % 8 == 0) {
            eight[g++] = i;
        }
        if (i % 9 == 0) {
            nine[h++] = i;
        }
        if (i % 10 == 0) {
            ten[j++] = i;
        }
    }

    printf("\nMultiples of 2: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", two[i]);
    }
    printf("\n");

    printf("Multiples of 3: ");
    for (int i = 0; i < b; i++) {
        printf("%d ", three[i]);
    }
    printf("\n");

    printf("Multiples of 4: ");
    for (int i = 0; i < c; i++) {
        printf("%d ", four[i]);
    }
    printf("\n");

    printf("Multiples of 5: ");
    for (int i = 0; i < d; i++) {
        printf("%d ", five[i]);
    }
    printf("\n");

    printf("Multiples of 6: ");
    for (int i = 0; i < e; i++) {
        printf("%d ", six[i]);
    }
    printf("\n");

    printf("Multiples of 7: ");
    for (int i = 0; i < f; i++) {
        printf("%d ", seven[i]);
    }
    printf("\n");

    printf("Multiples of 8: ");
    for (int i = 0; i < g; i++) {
        printf("%d ", eight[i]);
    }
    printf("\n");

    printf("Multiples of 9: ");
    for (int i = 0; i < h; i++) {
        printf("%d ", nine[i]);
    }
    printf("\n");

    printf("Multiples of 10: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", ten[i]);
    }
    printf("\n");

    return 0;
}
