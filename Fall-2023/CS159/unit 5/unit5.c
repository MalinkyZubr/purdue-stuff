#include <stdio.h>
#include <math.h>

void welcome_message();
int get_quotient(int, int);
int get_remainder(int, int);

int main()
{
    int dividend;
    int divisor;
    int quotient;
    int remainder;

    welcome_message();

    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient = get_quotient(dividend, divisor);
    remainder = get_remainder(dividend, divisor);

    printf("Quotient: %d with a remainder of %d\n", quotient, remainder);

    return 0;
}

void welcome_message()
{
    printf("Welcome to the silly quotient calculator\n\n");
}
int get_quotient(int dividend, int divisor)
{
    return dividend / divisor;
}
int get_remainder(int dividend, int divisor)
{
    return dividend % divisor;
}