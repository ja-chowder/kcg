/*Classifies a poker hand */

#include <stdbool.h> /* C99 Only*/
#include <stdlib.h>
#include <stdio.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */

/* Below two variables disabled for different approach*/
/*int num_in_rank[NUM_RANKS];*/
/*int num_in_suit[NUM_SUITS];*/

bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2*/
int cardArray[5][2];
int high_rank_int = 0;
char high_rank_ch;
int high_suit_int;
char high_suit_char;

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_results(void);

/* main */
int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_results();
    }
}

/************************************************************************
 * read_cards: reads the card into the external variables num_in_rank and *
 *             num_in_suit; checks for bad cards and duplicate cards.     *
 *************************************************************************/

void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    bool duplicate_card;
    int cards_read = 0;

    /*initialize new variable cardArray*/
    for (int i = 0; i < NUM_CARDS; i++) {
        cardArray[i][0] = 0;
        cardArray[i][1] = 0;
    }

    while (cards_read < NUM_CARDS) {
        bad_card = false;
        duplicate_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
        case '0':                       exit(EXIT_SUCCESS);
        case '2':                       rank = 0; break;
        case '3':                       rank = 1; break;
        case '4':                       rank = 2; break;
        case '5':                       rank = 3; break;
        case '6':                       rank = 4; break;
        case '7':                       rank = 5; break;
        case '8':                       rank = 6; break;
        case '9':                       rank = 7; break;
        case 't': case 'T':             rank = 8; break;
        case 'j': case 'J':             rank = 9; break;
        case 'q': case 'Q':             rank = 10; break;
        case 'k': case 'K':             rank = 11; break;
        case 'a': case 'A':             rank = 12; break;
        default:                        bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
        case 'c': case 'C':             suit = 0; break;
        case 'd': case 'D':             suit = 1; break;
        case 'h': case 'H':             suit = 2; break;
        case 's': case 'S':             suit = 3; break;
        default:                        bad_card = true;
        }

        while ((ch = getchar() != '\n'))
            if (ch != ' ') bad_card = true;

        cardArray[cards_read][0] = rank;
        cardArray[cards_read][1] = suit;

        for (int i = cards_read - 1; i >= 0; i--) {
            if (cardArray[cards_read][0] == cardArray[i][0] && cardArray[cards_read][1] == cardArray[i][1])
                duplicate_card = true;
        }

        if (bad_card)
            printf("Bad card; ignored.\n");

        else if (duplicate_card) {
            printf("Duplicate card; ignored.\n");
            cardArray[cards_read][0] = 0;
            cardArray[cards_read][1] = 0;
            duplicate_card = false;
        }

        else {

            cards_read++;
        }
    }
}


/************************************************************************
 * analyze_hand: Determines whether hte hand contains a straight, a flush *
 *               , four-of-a-kind, and/or three-of-a-kind; determines the *
 *               number of pairs; stores the results into the external    *
 *               variables straight, flush, four, three, and pairs.       *
 *************************************************************************/

void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /*variables for sorting*/
    int curLow[2][1];
    int swap[2][1];

    /*sorting section*/
    for (int i = 0; i < NUM_CARDS; i++) {

        /*set the current low number*/
        curLow[0][0] = cardArray[0][i];
        curLow[1][0] = cardArray[1][i];

        /*loop to compare other numbers to current low number*/
        for (int j = i + 1; j< NUM_CARDS; j++) {
            if (cardArray[0][j] < curLow[0][0]) {
                swap[0][0] = curLow[0][0];
                swap[1][0] = curLow[1][0];
            }
        }

    }

    /* check for flush */
    int flushCount = 0;
    for (int i = 1; i < NUM_CARDS; i++) {
        if (cardArray[1][i] == cardArray[1][0])
            flushCount++;
        if (flushCount == 4)
            flush = true;
    }

    /* check for straight*/
    int straightCount = 0;
    for (int i = 0; i < NUM_CARDS; i++) {
        if (cardArray[i + 1][0] == cardArray[i][0] + 1)
            straightCount++;
        if (straightCount == 4)
            straight = true;
    }

    /*check for 4-of-a-kind, 3 -of-a-kind, and pair */
    int currentRank;
    int currentRankCount;

    /*
    Outer loop to iterate through the first row and
    assign the current rank to a placeholder for comparison
    in the second loop
    */
    for (int i = 0; i < NUM_CARDS - 1; i++) {

        currentRank = cardArray[i][0];
        currentRankCount = 0;

        /*Inner Loop to count the number of times a particular rank occurs */
        for (int j = 0; j < NUM_CARDS; j++) {
            if (cardArray[j][0] == currentRank)
                currentRankCount++;
        }

        if (currentRankCount == 4) {
            four = true;
            break;
        }

        if (currentRankCount == 3)
            three = true;

        if (currentRankCount == 2)
            pairs++;

    }

    /* determines the high card and stores in a variable */
    for (int i = 0; i < NUM_CARDS; i++) {
        if (cardArray[i][0] > high_rank_int) {
            high_rank_int = cardArray[i][0];
            high_suit_int = cardArray[i][1];
        }
    }

    switch (high_suit_int) {
    case 0: high_suit_char = 'c'; break;
    case 1: high_suit_char = 'd'; break;
    case 2: high_suit_char = 'h'; break;
    case 3: high_suit_char = 's'; break;
    }


    if (high_rank_int >= 8) {
        switch (high_rank_int) {
        case 12: high_rank_ch = 'A'; break;
        case 11: high_rank_ch = 'K'; break;
        case 10: high_rank_ch = 'Q'; break;
        case  9: high_rank_ch = 'J'; break;
        case  8: high_rank_ch = 'T'; break;
        }
    }
}


/************************************************************************
 * print_result : Prints the classification of the hand, based on the     *
 *                values of the external variables straight, flush, four, *
 *                three, and pairs.                                       *
 *************************************************************************/

void print_results(void)
{
    if (straight && flush)          printf("Straight flush");
    else if (four)                  printf("Four of a kind");
    else if (three && pairs == 1)   printf("Full house");
    else if (flush)                 printf("Flush");
    else if (straight)              printf("Straight");
    else if (three)                 printf("Three of a kind");
    else if (pairs == 2)            printf("Two pairs");
    else if (pairs == 1)            printf("One pair");
    else if (high_rank_int >= 8)    printf("High card %c%c", high_rank_ch, high_suit_char);
    else                            printf("High card %d%c", high_rank_int + 2, high_suit_char);
    printf("\n\n");
}