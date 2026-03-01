#include <stdio.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

// PUSH Operation
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

// POP Operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

// DISPLAY Stack
void display() {
    if (top == -1) {
        printf("Stack is Empty!\n");
    } else {
        printf("Stack Elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Reverse String using Stack
void reverseString() {
    char str[100];
    char tempStack[100];
    int i, len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    len = strlen(str);

    // Push characters into stack
    for (i = 0; i < len; i++) {
        tempStack[i] = str[i];
    }

    printf("Reversed String: ");

    // Pop characters in reverse order
    for (i = len - 1; i >= 0; i--) {
        printf("%c", tempStack[i]);
    }

    printf("\n");
}

int main() {
    int choice, value;

    do {
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                reverseString();
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}