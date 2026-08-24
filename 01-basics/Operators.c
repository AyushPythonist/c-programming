#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("(a > b) && (a != b): %d\n", (a > b) && (a != b));
    printf("(a < b) || (a != b): %d\n", (a < b) || (a != b));
    printf("!(a == b): %d\n", !(a == b));

    // Increment and Decrement
    a++;
    printf("After increment: %d\n", a);

    b--;
    printf("After decrement: %d\n", b);

    // Assignment Operators
    int x = 10;

    x += 5;
    printf("x += 5: %d\n", x);

    x -= 3;
    printf("x -= 3: %d\n", x);

    x *= 2;
    printf("x *= 2: %d\n", x);

    x /= 4;
    printf("x /= 4: %d\n", x);

    x %= 3;
    printf("x %%= 3: %d\n", x);

    // Ternary Operator
    int max = (a > b) ? a : b;
    printf("Greater number: %d\n", max);

    return 0;
}
