#include <ctype.h>
#include <stddef.h>
#include <string.h>

#include "textutils.h"

size_t count_words(const char *text) {
    if (text == NULL) {
        return 0;
    }

    size_t words = 0;
    int in_word = 0;

    for (const char *ptr = text; *ptr != '\0'; ptr++) {
        if (*ptr == ' ' || *ptr == '\n' || *ptr == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    return words;
}

void to_uppercase(char *text) {
    if (text == NULL) {
        return;
    }

    for (char *ptr = text; *ptr != '\0'; ptr++) {
        *ptr = (char)toupper((unsigned char)*ptr);
    }
}
