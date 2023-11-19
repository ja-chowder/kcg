#include <stdio.h>
#include <string.h>

#define MAXWORDSIZE 20

int main(void) {

    char smallest_word[MAXWORDSIZE + 1] = "~high-placeholder";
    char largest_word[MAXWORDSIZE + 1] = "@low-placeholder";
    char current_word[MAXWORDSIZE + 1] = "placeholder";

    while (strlen(current_word) != 4) {
        printf("Enter word: ");
        scanf("%s", current_word);

        if (strcmp(current_word, smallest_word) < 0)
            strcpy(smallest_word, current_word);

        if (strcmp(current_word, largest_word) > 0)
            strcpy(largest_word, current_word);

    }
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}