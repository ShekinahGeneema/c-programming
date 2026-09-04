#include <stdio.h>

int main()
{
    // 1. Variables
    int age = 22;
    float temperature = 28.5f;
    char grade = 'A';

    printf("VARIABLES\n");
    printf("Age = %d\n", age);
    printf("Temperature = %.1f C\n", temperature);
    printf("Grade = %c\n\n", grade);

    // Changing the value of a variable
    age = 23;
    printf("Updated Age = %d\n\n", age);


    // 2. Constants
    const float PI = 3.14159f;
    const int MAX_VALUE = 100;

    printf("CONSTANTS\n");
    printf("PI = %.5f\n", PI);
    printf("Maximum Value = %d\n\n", MAX_VALUE);


    // 3. Integer literals
    int decimal = 25;
    int octal = 025;
    int hexadecimal = 0x19;

    printf("INTEGER LITERALS\n");
    printf("Decimal = %d\n", decimal);
    printf("Octal = %o\n", octal);
    printf("Hexadecimal = 0x%X\n\n", hexadecimal);


    // 4. Floating-point literals
    float number1 = 2.5f;
    float number2 = 0.0000234f;
    double number3 = 2.2e-5;

    printf("FLOATING-POINT LITERALS\n");
    printf("Number 1 = %f\n", number1);
    printf("Number 2 = %f\n", number2);
    printf("Number 3 = %e\n\n", number3);


    // 5. Character literals
    char first = 'A';
    char digit = '5';
    char symbol = '#';

    printf("CHARACTER LITERALS\n");
    printf("First character = %c\n", first);
    printf("Digit character = %c\n", digit);
    printf("Symbol = %c\n\n", symbol);


    // 6. String literals
    printf("STRING LITERALS\n");
    printf("Hello, Embedded World!\n");
    printf("C Programming\n\n");


    // 7. Escape sequences
    printf("ESCAPE SEQUENCES\n");

    printf("Newline example\n");
    printf("Tab example:\tEmbedded C\n");
    printf("Backslash example: \\\n");
    printf("Single quote: '\n");
    printf("Double quote: \"Hello\"\n");

    return 0;
}
