#include <stdio.h>

int prosesnrp(char nrp[]) {
    int di = 0, u;
    for (u = 0; nrp[u] != 0; u++) {
        di = di + (nrp[u] - '0');
    }
    return di;
}

int main() {
    // menghasilkan jumlah total dari semua angka yang ada di nrp
    int result = prosesnrp("1234");
    // printf("%d", 'B' - 'A');
    // printf("%d\n", result);
    puts("");
}

