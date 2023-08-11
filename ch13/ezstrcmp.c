#include <stdio.h>
#include <string.h>

int main(void) {
    char day_str[3] = " 5";
    char mst_str[61] = "24 Susan's birthday";

    printf("strcmp result: %d\n", strcmp(day_str, mst_str));

    return 0;
}