#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter x: ");
    scanf("%f", &x);

    if (x < -1)
    {
        y = 15 * x - 2;
        printf("y = %.2f\n", y);
    }
    else if ((x >= 0 && x <= 8) || x >= 16)
    {
        y = -3 * x * x / 5 + 9;
        printf("y = %.2f\n", y);
    }
    else
    {
        printf("Function is not defined for this x.\n");
    }

    return 0;
}
