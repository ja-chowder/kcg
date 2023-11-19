#include <stdio.h>
#include <string.h>

#define charMax 10

int read_line(char str[], int n);

int main(void) {

    char charArray[charMax + 1];
    read_line(charArray, sizeof(charArray));
    printf("%s", charArray);

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != ' ' && i < n - 1) {
        if (ch == ' ')
            continue;
        str[i++] = ch;
    }

    str[i++] = '\n';
    str[i] = '\0';
    return i;
}