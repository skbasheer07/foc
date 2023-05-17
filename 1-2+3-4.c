#include <stdio.h>

int main() {
    int n = 5;  // Number of terms
    int sum = 0;
    int sign = 1;
    int i;
    for ( i=1; i<= n; i++)
	 {
        sum += sign * i;
        sign = -sign;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
