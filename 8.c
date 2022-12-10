#include <stdio.h>

int is_prime(int a) {
    if (a < 2) return 0;
    for (int i = 2; i < a; ++i) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; ++i) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    // 0 = false
    // selain 0 = true
    puts("");
}
