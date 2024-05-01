#include <stdio.h>
#include <conio.h>

int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int result[3][3];
    int i, j, l;
    printf("Enter the Elements for Matrix A\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int var1;
            printf("\tEnter A%d%d: ", i + 1, j + 1);
            scanf("%d", &var1);
            mat1[i][j] = var1;
        }
    }
    printf("\nEnter the Elements for Matrix B\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int var2;
            printf("\tEnter B%d%d: ", i + 1, j + 1);
            scanf("%d", &var2);
            mat2[i][j] = var2;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int sum = 0;
            for (l = 0; l < 3; l++)
            {
                sum = sum + mat1[i][l] * mat2[l][j];
            }
            result[i][j] = sum;
        }
    }
    printf("\n");
    printf("\nThe Multiplication of A x B: \n\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("[");
        for (j = 0; j < 3; j++)
        {
            printf("   %d   ", result[i][j]);
        }
        printf("]\n");
    }
    printf("\n\n");

    getch();
    return 0;
}