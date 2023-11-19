#include <stdio.h>

int count_spaces(const char *s);

int main(void) {}


/*new function*/
int count_spaces(const char *s) {
    int count = 0;
    while(*s)
        if (*s++ == ' ')
            count++;
    return count;
}

/* old function
int count_spaces(const char *s) {
    int count = 0;

    for (; *s != '\0'; s++)
        if (*s == ' ')
            count++;
    return count;
}
*/