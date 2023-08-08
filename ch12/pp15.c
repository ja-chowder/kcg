#include <stdio.h>

int main (void) {
    int temperatures[7][24];
    int *ptr;
    int i;

    for (ptr = temperatures[i]; ptr < temperatures[i] + 24; ptr++)
        printf("%d ", *ptr);

    printf("\n");
}