#include <stdio.h>

int main()
{   
    int x;
    x = 5;

    switch(x) // the control expression must be integral, of integers
    {
        case 1:
            printf("1");
            break;
        case 2:
            printf("h");
            break;
        case 3: 
            printf("z");
            break;
        case 4: 
            printf("e");
            break;
        case 5:
            printf("x");
            break;
        default:
            printf("yeeet");
            break;
    }
    return 0;
}