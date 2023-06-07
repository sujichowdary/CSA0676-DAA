#include <stdio.h>

void generatePascalTriangle(int rows)
{
    int triangle[rows][rows];
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            triangle[i][j] = 0;
        }
    }
    for (i = 0; i < rows; i++) {
        triangle[i][0] = 1;
        for (j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }
        for (j = 0; j <= i; j++) {
            printf("%6d", triangle[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &rows);

    generatePascalTriangle(rows);

    return 0;
}

