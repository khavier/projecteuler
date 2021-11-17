#include <stdio.h>


int square_of_the_sum(int limit);
int sum_of_the_squares(int limit);

int main() {

    int n    = 100;
    int diff = square_of_the_sum(n) - sum_of_the_squares(n);

    printf("Output: %d\n", diff);

    return 0;
}




int sum_of_the_squares(int limit) {

    int output = 0;

    for (int i = 1; i <= limit; i++) {
        output += i * i;
    }

    return output;
}


int square_of_the_sum(int limit) {

    int output = 0;

    for (int i = 1; i <= limit; i++) {
        output += i;
    }

    return output * output;
}
