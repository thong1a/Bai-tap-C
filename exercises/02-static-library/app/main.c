#include <stdio.h>
#include "stats.h"

int main(void) {
    int values[] = {3, 7, -2, 8, 5};
    size_t count = sizeof(values) / sizeof(values[0]);

    printf("Mean: %.2f\n", stats_mean(values, count));
    printf("Min: %d\n", stats_min(values, count));
    printf("Max: %d\n", stats_max(values, count));

    return 0;
}
