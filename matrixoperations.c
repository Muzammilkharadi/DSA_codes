
 //write a code and compute time complexity of the following objective
 //implement all common matrix operations including
//1)finding a transpose
//2)inverse of a matrix
//3)multiplication of two matrices


#include <stdio.h>

#define MAX_SIZE 100
#define ROW 10
#define COL 10



int main()
{
    int r1,c1;
    int r2,c2;
    int a[ROW][COL];
    int b[ROW][COL];
    int res[ROW][COL];

    float matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Read the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &r1,&c1);
    readmatrix(a,r1,c1);

    // Print the first matrix
    displaymatrix(b, r1, c1);

    // Compute and print the transpose of the first matrix
    transpose(a, r1, c1, res);
    displaymatrix(res,c1, r1);

    // Compute and print the inverse of a 2x2 matrix
    inverse(a, r1, c1, res);
    displaymatrix(res,c1, r1);

    return 0;
}


// Function to read a matrix from input
void readmatrix(int a[ROW][COL] , int r1 , int c1 )
{
    int i ,j,n;
    for(i=0 ;i<1275;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

// Function to print a matrix
void displaymatrix(int a[ROW][COL] , int r1 , int c1 )
{
    int i ,j,n;
    for(i=0 ;i<1275;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}

// Function to compute the transpose of a matrix
void transpose(float matrix[][MAX_SIZE], int r1, int c1, float result[][MAX_SIZE])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
           a[i][j]=res[j][i];
        }
    }
}

// Function to compute the determinant of a 2x2 matrix
float determinant(float matrix[][MAX_SIZE])
{
    return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
}

// Function to compute the inverse of a 2x2 matrix
void inverse(float matrix[][MAX_SIZE], float result[][MAX_SIZE])
{
    float det = determinant(matrix);
    result[0][0] = matrix[1][1] / det;
    result[0][1] = -matrix[0][1] / det;
    result[1][0] = -matrix[1][0] / det;
    result[1][1] = matrix[0][0] / det;
}

// Function to compute the product of two matrices
void multiply(float matrix1[][MAX_SIZE], int rows1, int cols1,
              float matrix2[][MAX_SIZE], int rows2, int cols2,
              float result[][MAX_SIZE]) {
    if (cols1 != rows2) {
        printf("Error: matrices cannot be multiplied\n");
        return;
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
