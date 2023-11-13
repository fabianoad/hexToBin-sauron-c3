#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main() {
    bool found = false;
    char n;
    char hex[] = { 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
    int SIZE = 0;
    int response[SIZE];
    printf("input a hexadecimal digit: ");
    scanf("%X", &n);

    for (int i = 0; i < strlen(hex); i++)
        if(n == hex[i]) found = true;

    if(found && (n >= 0 && n <= 15)) {
        int num = n;
        int count = 0;
        int remainder;
        while(num != 0) {
            remainder = num % 2;
            response[count] = remainder;
            num = num / 2;
            count++;
        }
        SIZE = count;
    } else {
        printf("not a 1-digit hex number");
        return 0;
    }
    /* result print */
    printf("HEX: %X\n", n);
    printf("BIN: ");
    for (int i = SIZE - 1; i >= 0; i--)
    {
        printf("%d", response[i]);
    }

    return 0;
}