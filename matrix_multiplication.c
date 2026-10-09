#include <stdio.h>

int main()
{
    int r1, r2, c1, c2;
    printf("no. of row for matrix-1:");
    scanf("%d", &r1);
    printf("no. of coloumn for matrix-1:");
    scanf("%d", &c1);
    int mat1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("A%d%d=", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        printf("|");
        for (int j = 0; j < c1; j++)
        {

            printf("%d ", mat1[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("no. of row for matrix-2:");
    scanf("%d", &r2);
    printf("no. of coloumn for matrix-2:");
    scanf("%d", &c2);
    int mat2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("B%d%d=", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < r2; i++)
    {
        printf("|");
        for (int j = 0; j < c2; j++)
        {

            printf("%d ", mat2[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("\n");
    if(r2!=c1)
    {
        printf("multiplication is not possible\n");
        
    }
    else if(r2==c1)
    {printf("multiplication of matrix-1 and matrix-2 is :\n");
    int arr3[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        printf("|");
        for (int j = 0; j < c2; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                arr3[i][j] += mat1[i][k] * mat2[k][j];
                
            }
            printf("%d ", arr3[i][j]);
        }
        printf("|");
        printf("\n");
    }}
        return 0;
    }