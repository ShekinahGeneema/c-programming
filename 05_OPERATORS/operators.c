#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    int c, d, e, f, g;
    int h, i, j, k, l;

    // Arithmetic operators
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;

    printf("Addition       = %d\n", c);
    printf("Subtraction    = %d\n", d);
    printf("Multiplication = %d\n", e);
    printf("Division       = %d\n", f);
    printf("Modulus        = %d\n", g);

    // Relational operators
    h = a > b;
    i = a < b;
    j = a == b;
    k = a != b;
    l = a >= b;

    printf("a > b  = %d\n", h);
    printf("a < b  = %d\n", i);
    printf("a == b = %d\n", j);
    printf("a != b = %d\n", k);
    printf("a >= b = %d\n", l);

    return 0;
}
