#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256

int main() {
    char s[100005];
    if (scanf("%s", s) != 1) return 0;

    int freq[CHAR_RANGE] = {0};
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        freq[(unsigned char)s[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[(unsigned char)s[i]] == 1) {
            printf("%c\n", s[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
