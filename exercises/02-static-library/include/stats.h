#ifndef STATS_H
#define STATS_H

#include <stddef.h>

double stats_mean(const int *values, size_t count);
int stats_max(const int *values, size_t count);
int stats_min(const int *values, size_t count);

#endif
