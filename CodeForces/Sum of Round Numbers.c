#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int way = 0;
        int multiplier = 1;
        int round_numbers[10];
        int temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0) {
                round_numbers[way] = digit * multiplier;
                way++;
            }
            temp /= 10;
            multiplier *= 10;
        }


        printf("%d\n", way);


        for (int i = 0; i < way; i++) {
            printf("%d ", round_numbers[i]);
        }
        printf("\n");
    }

    return 0;
}
