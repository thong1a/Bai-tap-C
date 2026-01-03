CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=cli-summary

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

.PHONY: all clean
