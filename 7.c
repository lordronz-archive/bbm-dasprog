#include <stdio.h>

int main() {
    int n;
    char days_name[12][12] = {"Jumat", "Sabtu", "Minggu", "Senin", "Selasa", "Rabu", "Kamis"};
    scanf("%d", &n);

    // 6 % 7 = 6
    // 9 % 7 = 2
    // 45 % 7 = 3
    // 8 % 7 = 1

    printf("%s\n", days_name[(n - 1) % 7]);
    
    //switch (n % 7) {
//	case 1:
//	    printf("Jumat");
//	    break;
//	...
  //  }
}
