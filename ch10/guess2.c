/* generates random number and asks for a guess until random number matched*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* External variable*/
int secret_number;

/* function prototypes*/
void initialize_number_generator(void);
int choose_new_secret_number(void);
void read_guesses(int secret_number);

int main(void)
{
    char command;
    int secret_number;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
    initialize_number_generator();
    do
    {
        secret_number = choose_new_secret_number();
        printf("A new number has been chose.\n");
        read_guesses(secret_number);
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');
}

void initialize_number_generator(void)
{
    srand((unsigned)time(NULL));
}

int choose_new_secret_number(void)
{
    return rand() % MAX_NUMBER + 1;
}

void read_guesses(int secret_number)
{
    int guess, num_guesses = 0;

    for (;;)
    {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess == secret_number)
        {
            printf("You won in %d guess!\n\n", num_guesses);
            return;
        }

        else if (guess < secret_number)
            printf("Too low; try again.\n");

        else
            printf("Too high; try again.\n");
    }
}