#include <stdio.h>
#include <math.h>

int main() {
    int n = 4;  // Number of terms
    int sum = 0;
    int i;
    for ( i = 1; i <= n; i++) {
        int term = pow(i, i);
        sum += term;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
