#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100
#define MAX_INPUT_SIZE 50

/* external variables */
int stack[STACK_SIZE];
int top = 0;

void push(double value) {
    if (top == STACK_SIZE) {
        fprintf(stderr, "Stack overflow\n");
        exit(EXIT_FAILURE);
    } else {
        stack[top++] = value;
    }
}

double pop() {
    if (top == 0) {
        fprintf(stderr, "Stack underflow\n");
        exit(EXIT_FAILURE);
    } else {
        return stack[--top];
    }
}

double calculate() {
    char token[MAX_INPUT_SIZE];
    double operand1, operand2;
    
    while (scanf("%s", token) == 1) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            push(atof(token)); 
        } else if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/' || token[0] == '=') {
            if (token[0] == '=') {
                // When '=' is encountered, return the top value as the result
                return pop();
            }
            // Assume it's an operator
            operand2 = pop();
            operand1 = pop();
            switch (token[0]) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
                default:
                    fprintf(stderr, "Unknown operator: %c\n", token[0]);
                    exit(EXIT_FAILURE);
            }
        } else {
            fprintf(stderr, "Invalid token: %s\n", token);
            exit(EXIT_FAILURE);
        }
    }

    // If we reach here without encountering '=', there's an error
    fprintf(stderr, "Expression did not end with '='\n");
    exit(EXIT_FAILURE);
}

int main(void) {
    printf("Enter an RPN expression: \n");

    double result = calculate();
    printf("Value of expression: %f", result);
}