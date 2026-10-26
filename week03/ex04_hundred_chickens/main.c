/*
	À×Óî³¬	26803070197
*/ 
#include <stdio.h>

int main() {
    int x, y, z;

    for (x = 0; x <= 100; x++) {
        for (y = 0; y <= 100 - x; y++) {
            z = 100 - x - y;
            if (z % 3 == 0 && 5 * x + 3 * y + z / 3 == 100) {
                printf("%d %d %d\n", x, y, z);
            }
        }
    }

    return 0;
}
