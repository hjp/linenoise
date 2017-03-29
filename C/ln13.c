#include <stdio.h>

int main(void) {
    char a[2] = {1, 2};
    char *b = a;
    char *c = a;

    *c++*=~!-+--*++b;
    //1234567890123
    //         1111
    printf("a = %d %d\n", a[0], a[1]);
    printf("b = a+%td\n", b - a);
    printf("c = a+%td\n", c - a);
    return 0;
}
