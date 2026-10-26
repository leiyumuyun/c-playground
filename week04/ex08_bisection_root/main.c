/*
	À×Óî³¬	26803070197
*/
#include <stdio.h>

double f(double x) {
    return x * x * x - x * x - 1;
}

int main() {
    double low = 0.0, high = 3.0;
    double mid;
    
    while (high - low > 0.00001) {
        mid = (low + high) / 2.0;
        if (f(mid) == 0) {
            break;
        } else if (f(low) * f(mid) < 0) {
            high = mid;
        } else {
            low = mid;
        }
    }
    printf("%.5f\n", (low + high) / 2.0);
    return 0;
}
