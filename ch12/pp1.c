#include <stdio.h>

#define MSG_LEN 80

int main(void) {
    char charArray[MSG_LEN];
    char* ptr = charArray;

    printf("Enter a message: ");
    while (*(ptr - 1) != '\n')
        *ptr++ = getchar();

    for (ptr = ptr - 2; ptr >= charArray; ptr--)
        printf("%c", *ptr);

    return 0;
}