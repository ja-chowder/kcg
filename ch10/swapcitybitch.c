/*just riffin with my low level friends cause fuck it man i ain't no beginner*/

#include <stdio.h>

#define ARRAYSIZE 10

int main(void) {

int usa[ARRAYSIZE] = {88, 4, 60, 71, 22, 92, 51, 49, 76, 6};
int low;
int lowIndex;
int swap;

for (int i = 0; i < ARRAYSIZE; i++) {
    low = usa[i];
    lowIndex = i;
    swap = usa[i];

    for (int j = i + 1; j < ARRAYSIZE; j++) {
        
        if (usa[j] < low) {
            low = usa[j];
            lowIndex = j;
        }
        }

    if (low != usa[i]) {
        usa[i] = low;
        usa[lowIndex] = swap;
    }

    }   

    for (int p = 0; p < ARRAYSIZE; p++)
        printf("%d ", usa[p]);

    return 0;
}