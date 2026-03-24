#include <stdio.h>

int main() {
    int n, bits = 0, temp, mask, ones;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // count bits
    while (temp > 0) {
        bits++;
        temp >>= 1;
    }

    mask = (1 << bits) - 1;   // create mask
    ones = n ^ mask;          // 1's complement

    printf("1's Complement = %d\n", ones);

    return 0;
}
