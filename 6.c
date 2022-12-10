#include <stdio.h>

int main() {
    int a = 1, b = 1, c, n;

    scanf("%d", &n);

    // ternary operation
    n == 0 ? printf("1") : printf("1, 1");

    //if (n == 0) {
	//printf("1");
    //} else {
//	printf("1, 1");
  //  }

    for (int i = 0; i < n - 1; ++i) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    puts("");
}
