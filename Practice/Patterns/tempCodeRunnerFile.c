#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= n)
            {
                if (j <= i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                if (n - i + 1 <= (j - n))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}