#include <stdio.h>
#include <stdlib.h>

struct random {
    int increment;
};

int main() {

    struct random * rand = malloc(sizeof(struct random));

    int base_seed = 10;

    for (int i = 0; i <= 20; i++) {

        int formula = (i * base_seed + rand->increment) % 100;
        rand->increment++;

        printf("Value: %d\n", formula);
    }

    EXIT_SUCCESS;
}