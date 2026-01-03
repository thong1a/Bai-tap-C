CC=gcc
CFLAGS=-Wall -Wextra -std=c11 -Iinclude
AR=ar
ARFLAGS=rcs
STATIC_LIB=libstats.a
APP=stats-demo

SRC=$(wildcard src/*.c)
OBJ=$(SRC:src/%.c=build/%.o)

all: $(STATIC_LIB) $(APP)

build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

$(STATIC_LIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

$(APP): app/main.c $(STATIC_LIB)
	$(CC) $(CFLAGS) -o $@ $^

build:
	mkdir -p build

clean:
	rm -rf build $(STATIC_LIB) $(APP)

.PHONY: all clean
