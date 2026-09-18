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
    else
    {
        if (x >= 0)
        {
            if (x <= 8)
            {
                y = -3 * x * x / 5 + 9;
                printf("y = %.2f\n", y);
            }
            else
            {
                if (x >= 16)
                {
                    y = -3 * x * x / 5 + 9;
                    printf("y = %.2f\n", y);
                }
                else
                {
                    printf("Функція не визначенна для цього x.\n");
                }
            }
        }
        else
        {
            printf("Функція не визначенна для цього x.\n");
        }
    }

    return 0;
}
