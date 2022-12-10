#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int any_to_dec(char* hexdecnumber, int base) {
    long long decimalnumber, place;
    int i = 0, val, len;

    decimalnumber = 0;
    place = 1;

    // Find the length of total number of hex digit
    // finding the length of hexa decimal number
    len = strlen(hexdecnumber);
    len--;

    // for loop iterates the hexa decimal number digits
    for (i = 0; hexdecnumber[i] != '\0'; i++) {
        // finding the equivalent decimal digit for each
        // hexa decimal digit
        if (hexdecnumber[i] >= '0'
            && hexdecnumber[i] <= '9') {
            val = hexdecnumber[i] - 48;
        }
        else if (hexdecnumber[i] >= 'a' && hexdecnumber[i] <= 'z') {
            val = hexdecnumber[i] - 97 + 10;
        }
        else if (hexdecnumber[i] >= 'A' && hexdecnumber[i] <= 'Z') {
            val = hexdecnumber[i] - 65 + 10;
        }
        decimalnumber += val * pow(base, len);
        len--;
    }
    printf("Base %d number = %s, ", base, hexdecnumber);
    printf("Decimal number = %lld\n", decimalnumber);
    return decimalnumber;
}

int* dec_to_any(int num, int base) {
    int i;
    int initialNum = num;
    int * a = malloc(100 * sizeof(int));
    for (i = 0; num > 0; ++i) {
        a[i] = num % base;
        num /= base;
    }
    printf("Base %d of %d: ", base, initialNum);
    while (i--) {
        if (base > 10 && a[i] > 9) {
            printf("%c", a[i] - 10 + 'A');
        } else {
            printf("%d", a[i]);
        }
    }
    puts("");
    return a;
}

int main() {
    int a = 3, b = 34;
    dec_to_any(a, 2);
    dec_to_any(b, 16);
    any_to_dec("8", 2);
    int res = any_to_dec("A1C", 16);
    dec_to_any(res, 2);
    dec_to_any(res, 8);
}
