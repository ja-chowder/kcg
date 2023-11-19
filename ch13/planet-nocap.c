#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char* argv[]) {
    char planets[][9] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {

            //printf("argv input string %s\n", argv[i]);
            //printf("ascii value of first letter of argv string: %c\n", argv[i][0]);
            
            if ((argv[i][0]) >= 97 && (argv[i][0]) <= 122)
                (argv[i][0]) -= 32;
                //printf("updated argv input string %s\n", argv[i]);

            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
