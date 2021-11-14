#include <stdio.h>


int main() {

    int limit  = 20;
    int output = 1;
    int status = 1;
    int i;

    while (1) {

        for (i = 1; i <= limit; i++) {

            if (output % i != 0) {
                status = 0;
		break;
	    }

        }

        if (status == 1)
            break;

        output += 1;
        status  = 1;
    }

    printf("Output: %d\n", output);

    return 0;
}
