#include <stdio.h>

int main() {
    int tahun;
    scanf("%d", &tahun);
    if (tahun % 4 == 0) {
        if (tahun % 100 == 0) {
            if (tahun % 400 == 0) {
                printf("Tahun Kabisat");
            } else {
                printf("Bukan Tahun Kabisat");
            }
        } else {
            printf("Tahun Kabisat");
        }
    } else {
        printf("Bukan Tahun Kabisat");
    }
    puts("");
}