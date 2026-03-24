#include <stdio.h>

int main() {
    int n, bits = 0, temp, mask, ones, twos;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        bits++;
        temp >>= 1;
    }

    mask = (1 << bits) - 1;

    ones = n ^ mask;     
    twos = ones + 1;     

    printf("1's Complement = %d\n", ones);
    printf("2's Complement = %d\n", twos);

    return 0;
}
