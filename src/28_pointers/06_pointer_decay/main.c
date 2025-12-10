#include <stdio.h>

void f2(char hello[]) {
    printf("da f2: %p\n", (void *)&hello);
    printf("%s\n", hello);
}

void f1(char hello[]) {
    printf("da f1: %p\n", (void *)&hello);
    f2(hello);
}

int main(void) {
    char hello[] = "Hello World!";
    printf("da main: %p\n", (void *)&hello);
    f1(hello);

    return 0;
}
