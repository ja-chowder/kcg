#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int* top_ptr = contents;

void make_empty(void) {
    top_ptr = contents;
}

bool is_empty(void) {
    return top_ptr == contents;
}

bool is_full(void) {
    return top_ptr == contents + 99;
}

void push(int i) {
    //if (is_full())
        /*stack_overflow();*/
        //printf("\n");
    //else
    *top_ptr++ = i;
}

int pop(void) {
    //if (is_empty())
        // stack_underflow();
    return *--top_ptr;
}

int main(void) {
    char pushpop = ' ';
    char sadboi = 'n';
    int pushpopint = 0;

    printf("%d\n", sizeof(int));
    printf("pointy pointy pointer time on a stack\n");
    printf("stacky mcstackerson reporting for duty\n");
    printf("the stack is now at address %p\n", top_ptr);
    printf("first operation:\na(push) or b(pop) ?!!\n");

    while (pushpop != 'q') {
        scanf(" %c", &pushpop);

        if (!is_full() && (pushpop == 'a' || pushpop == 'A')) {
            printf("integer, please:\n");
            scanf(" %d", &pushpopint);
            push(pushpopint);
            printf("%d pushed to a[%d] at address %p!!!!\n", pushpopint, top_ptr - contents - 1, top_ptr - 1);
            printf("the stack is now at address %p\n", top_ptr);
        }
        else if (is_full() && (pushpop == 'a' || pushpop == 'A'))
            printf("hey pal, the stack is full you gotta push next time. okay\n");
        else if (is_empty() && (pushpop == 'b' || pushpop == 'B'))
            printf("okay so the stack is empty. you can's pop off of nothing. plz push\n");
        else {
            printf("%d returned returned from a[%d] at address %p!!!!\n", pop(), top_ptr - contents - 1, top_ptr - 1);
            printf("the stack is now at address %p\n", top_ptr);
        }

        printf("so what's next\na(push) or b(pop) ?!! press q to leave!\n");
    }

    while (sadboi != 'y') {
        printf("sure ya wanna quit :(\n");
        printf("y or n? :/\n");
        scanf(" %c", &sadboi);
    }

    return 0;
}