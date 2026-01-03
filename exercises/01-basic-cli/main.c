#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long sum;
    size_t count;
} InputSummary;

static InputSummary summarize_inputs(int argc, char *argv[]) {
    InputSummary summary = {0, 0};

    for (int i = 1; i < argc; i++) {
        char *endptr = NULL;
        long value = strtol(argv[i], &endptr, 10);

        if (endptr == argv[i] || *endptr != '\0') {
            printf("%s is not an integer and will be ignored.\n", argv[i]);
            continue;
        }

        summary.sum += value;
        summary.count++;
    }

    return summary;
}

int main(int argc, char *argv[]) {
    InputSummary summary = summarize_inputs(argc, argv);

    if (summary.count == 0) {
        printf("No valid integers provided.\n");
        return 1;
    }

    double average = (double)summary.sum / (double)summary.count;
    printf("You entered %zu valid numbers with a total of %ld. Average: %.2f\n",
           summary.count, summary.sum, average);

    return 0;
}
