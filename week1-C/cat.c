#include <stdio.h>

int main() {
    int i = 3;
    while (i > 0) {
        printf("meow\n");
        i--;
    }

    i = 0;
    while (i < 3) {
        printf("meow\n");
        i++;
    }

    i = 1;
    while (i <= 3) {
        printf("meow\n");
        i++;
    }

    return 0;
}
