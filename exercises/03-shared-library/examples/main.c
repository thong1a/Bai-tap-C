#include <stdio.h>
#include <string.h>

#include "textutils.h"

int main(void) {
    char buffer[128] = "Build once, reuse everywhere";

    printf("Input: %s\n", buffer);
    printf("Word count: %zu\n", count_words(buffer));

    to_uppercase(buffer);
    printf("Uppercase: %s\n", buffer);

    return 0;
}
