#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);

    if (a < c) {
        swap(&a, &c);
	// temp = a;
	// a = c;
	// c = temp;
    }

    if (a < b) {
        swap(&a, &b);
	// temp = a;
	// a = b;
	// b = temp
    }

    if (b < c) {
        swap(&b, &c);
    }

    printf("%d %d %d\n", a, b, c);
}
