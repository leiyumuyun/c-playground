/*
	雷宇超	26803070197
*/
#include <stdio.h>
#define MOD 9999

int main() {
    long long n;
    scanf("%lld", &n);

    long long rx = 1, ry = 0, rz = 1;
    long long bx = 1, by = 1, bz = 0;

    while (n > 0) {
        if (n & 1) {
            long long x = (rx * bx + ry * by) % MOD;
            long long y = (rx * by + ry * bz) % MOD;
            long long z = (ry * by + rz * bz) % MOD;
            rx = x; ry = y; rz = z;
        }
        long long x = (bx * bx + by * by) % MOD;
        long long y = (bx * by + by * bz) % MOD;
        long long z = (by * by + bz * bz) % MOD;
        bx = x; by = y; bz = z;
        n >>= 1;
    }

    printf("%lld\n", ry);
    return 0;
}
