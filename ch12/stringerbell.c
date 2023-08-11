#include <stdio.h>

// To modify the array passed into count_spaces, const cannot be added to the parameter
//int count_spaces (const char *s);

//this right here is the proper declaration and way to set up the pointer.
int count_spaces (char *s);

int main(void) {

    int count = 0;
    char tip[10] = "the count";
    
    count_spaces(tip);
    
    for (int i = 0; i < 10; i++)
        printf("%c", *(tip + i));
    
    printf("\n");
    return 0;
}

/*
int count_spaces (const char *s) {
    
        for (int i = 0; i < 10; i++) {
            if (*(s + i) == ' ')
               (*(s + (char)i)) = 'X';
        }
}
*/

int count_spaces (char *s) {
    
        for (int i = 0; i < 10; i++) {
            if (*(s + i) == ' ')
               (*(s + (char)i)) = 'X';
        }
}