#include <stdio.h>
int main()
{
    int rows, a = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                a = 1;
            else
                a = a * (i - j + 1) / j;
            printf("%4d", a);
        }
        printf("\n");
    }
    return 0;
}
