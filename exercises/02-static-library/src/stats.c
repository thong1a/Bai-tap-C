#include "stats.h"

double stats_mean(const int *values, size_t count) {
    if (values == NULL || count == 0) {
        return 0.0;
    }

    long total = 0;
    for (size_t i = 0; i < count; i++) {
        total += values[i];
    }

    return (double)total / (double)count;
}

int stats_max(const int *values, size_t count) {
    if (values == NULL || count == 0) {
        return 0;
    }

    int max_value = values[0];
    for (size_t i = 1; i < count; i++) {
        if (values[i] > max_value) {
            max_value = values[i];
        }
    }

    return max_value;
}

int stats_min(const int *values, size_t count) {
    if (values == NULL || count == 0) {
        return 0;
    }

    int min_value = values[0];
    for (size_t i = 1; i < count; i++) {
        if (values[i] < min_value) {
            min_value = values[i];
        }
    }

    return min_value;
}
