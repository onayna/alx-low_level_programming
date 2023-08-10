#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++) {
        if (num1[i] < '0' || num1[i] > '9') {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (num2[i] < '0' || num2[i] > '9') {
            printf("Error\n");
            return 98;
        }
    }

    int len1 = 0;
    while (num1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (num2[len2] != '\0') {
        len2++;
    }

    if (len1 == 0 || len2 == 0) {
        printf("Error\n");
        return 98;
    }

    int totalLen = len1 + len2;
    int *result = (int *)calloc(totalLen, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        for (int j = len2 - 1; j >= 0; j--) {
            int n2 = num2[j] - '0';
            int sum = n1 * n2 + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }
        result[i] += carry;
    }

    int start = 0;
    while (start < totalLen && result[start] == 0) {
        start++;
    }

    if (start == totalLen) {
        printf("0\n");
    } else {
        for (int i = start; i < totalLen; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    free(result);

    return 0;
}
