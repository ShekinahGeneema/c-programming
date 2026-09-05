#include <stdio.h>

int main()
{
    int age = 22;
    char grade = 'A';
    float height = 5.6f;
    double salary = 2500.50;
    short marks = 95;
    long population = 140000L;
    unsigned int count = 100;

    printf("Age        = %d\n", age);
    printf("Grade      = %c\n", grade);
    printf("Height     = %.1f\n", height);
    printf("Salary     = %.2lf\n", salary);
    printf("Marks      = %hd\n", marks);
    printf("Population = %ld\n", population);
    printf("Count      = %u\n", count);

    return 0;
}
