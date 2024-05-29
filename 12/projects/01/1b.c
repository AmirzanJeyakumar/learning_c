#include <stdio.h>
#include <string.h>

int main(void) {
    printf("Enter a message: \n");

    char str[100];
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str); 
    char reversed[length + 1]; 

    int j = &str[length-1];
    for (int i = 0; i < length; i++) {
        reversed[i] = j--;
    }
    reversed[length] = '\0';

    printf("%s", reversed); 

}