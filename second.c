#include <stdio.h>

int main() {
    int x;
    long long sum = 0;
    int count = 0;

    while (scanf("%d", &x) == 1) {
        sum += x;
        count++;
    }

    long long expected = (long long)(count + 1) * (count + 2) / 2;
    printf("%lld\n", expected - sum);

    return 0;
}
