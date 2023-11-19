#include <stdio.h>
#include <string.h>

int main(void) {
    printf("%c", '\n');
    printf("%c", "\n");
    printf("%s", '\n');
    printf("%s", "\n");
    printf('\n'); /*printf expects a pointer, this supplies an integer/char so it doesn't work*/
    printf("\n");
    putchar('\n'); 
    putchar("\n"); /*putchar expects an integar/char not a pointer, so this doesn't work*/
    puts('\n'); /*puts expects a pointer. '\n' is a char/integer so this doesn't work */
    puts("\n");
    puts("");

    return 0;
}