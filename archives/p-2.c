#include <stdio.h>


int main() {

    int a = 1, b = 2, c = 0;
    int limit = 4000000;
    int sum   =  0;

    while (1) {

        if (c > limit)
            break;

        if (b % 2 == 0)
            sum += b;

        c = a + b;
        a = b;
        b = c;

    }

    printf("%d\n", sum);

    return 0;
}
