#include <stdio.h>

#define N 3

double ident[N][N];
double *ptr;
int zeroCounter = 0;
//int row, col;

int main(void) {
    for (ptr = ident[0]; ptr < ident[0] + N * N; ptr++) {
        if (ptr == ident[0]) {
            *ptr = 1;
            zeroCounter = 0;
        }
        else if (zeroCounter == N) {
            *ptr = 1;
            zeroCounter = 0;
        }
        else {
            *ptr = 0;
            zeroCounter++;
        }

        printf("%f assigned to array\n", *ptr);
    }

/*    for (ptr = ident[0]; ptr <= ident[0] + N * N; ptr++) {
        if ((ptr - ident[0]) % N == 0)
            printf("\n%d ", *ptr);
        else
            printf("%d ", *ptr);
    }

    return 0;
*/
}

/*
for (row = 0; row < N; row++)
    for (col = 0; col < N; col++)
    if (row == col)
        ident[row][col] = 1.0;
    else
        ident[row][col] = 0.0;
*/