#include <stdio.h>
#include <string.h>

void fooxxx(char []);

int main(void){
    char bob[] = "bloooooooooooooooopfood";
    fooxxx(bob);
    printf("%s\n", bob);
}

void fooxxx(char a[]) {
    for (char *p = a; p < a + strlen(a); p++) {
        if (*p =='f' && *(p + 1) == 'o' && *(p + 2) == 'o')
            *p = *(p + 1) = *(p + 2) = 'x';
    }
}