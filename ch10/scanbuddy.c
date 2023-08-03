#include <stdio.h>

int main(void) {

    int scanInt;
    char scanChar;
    int arr[10];
    int i = 0;

    printf("Enter 10 numbers, separated by spaces. Press enter when finished. \n");

    while (scanChar != '\n') {
        scanf("%d%c", scanInt, scanChar);
        arr[i] = scanInt;
        i++;
    } 

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);


}