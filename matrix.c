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
void transpose(float a[][MAX_SIZE], int r1, int c1, float res[][MAX_SIZE])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
           a[i][j]=res[j][i];
        }
    }
}





