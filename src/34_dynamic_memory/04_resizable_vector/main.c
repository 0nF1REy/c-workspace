#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float *items;
    size_t count;
    size_t capacity;
} Numbers;

// typedef struct {
//     int *items;
//     size_t count;
//     size_t capacity;
// } Prices;

// typedef struct {
//     const char **items;
//     size_t count;
//     size_t capacity;
// } Names;

#define da_append(xs, x) \
    do { \
        if (xs.count >= xs.capacity) { \
            if (xs.capacity == 0) xs.capacity = 256; \
            else xs.capacity *= 2; \
            xs.items = realloc(xs.items, xs.capacity * sizeof(*xs.items)); \
        } \
        xs.items[xs.count++] = x; \
    } while(0)

int main(void) {
    Numbers xs = {0};

    printf("--- VETOR DINÂMICO (REALLOC) ---\n");

    for (int x = 0; x < 10; ++x) {
        da_append(xs, (float)x);
    }

    for (size_t i = 0; i < xs.count; i++) {
        printf("%.1f\n", xs.items[i]);
    }

    if (xs.items) free(xs.items);

    return 0;
}
