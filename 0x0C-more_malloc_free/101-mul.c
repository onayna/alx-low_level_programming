#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int parse_number(char *str) {
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_digit(str[i])) {
            printf("Error\n");
            exit(98);
        }
        num = num * 10 + (str[i] - '0');
    }
    return num;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    int num1 = parse_number(argv[1]);
    int num2 = parse_number(argv[2]);

    int result = num1 * num2;

    printf("%d\n", result);

    return 0;
}
