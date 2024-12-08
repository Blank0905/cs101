#include <stdio.h>
int main() {
    int i = 12345;
    int n = i / 1000 % 10;
    int m = i % 10;

    i -= n * 1000;
    i += m * 1000;

    i -= m;
    i += n;
    printf("%d\n", i);
    return 0;
}
