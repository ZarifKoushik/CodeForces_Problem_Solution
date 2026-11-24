#include <stdio.h>

long long damage(long long c, long long a) {
    if (a <= c) {
        return a * (2 * c - a + 3) / 2;
    }
    return c * (c + 3) / 2 + (a - c);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long x;
        scanf("%lld", &x);

        long long ans = x;

        for (long long c = 0; c <= x; c++) {
            long long low = 1, high = x;

            while (low <= high) {
                long long mid = (low + high) / 2;

                if (damage(c, mid) >= x) {
                    ans = (ans < c + mid) ? ans : c + mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
