#include <stdio.h>

void read_matrix(int mat[3][3])
{
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_matrix(int mat[3][3])
{
    int i, j;
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int mat1[3][3], int mat2[3][3], int sum[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiply_matrices(int mat1[3][3], int mat2[3][3], int product[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transpose_matrix(int mat[3][3], int transpose[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
}

int main()
{
    int mat1[3][3], mat2[3][3], sum[3][3], product[3][3], transpose[3][3];

    printf("Enter the first matrix:\n");
    read_matrix(mat1);

    printf("Enter the second matrix:\n");
    read_matrix(mat2);

    add_matrices(mat1, mat2, sum);
    printf("The sum of the two matrices is:\n");
    print_matrix(sum);

    multiply_matrices(mat1, mat2, product);
    printf("The product of the two matrices is:\n");
    print_matrix(product);

    transpose_matrix(mat1, transpose);
    printf("The transpose of the first matrix is:\n");
    print_matrix(transpose);

    return 0;
}
