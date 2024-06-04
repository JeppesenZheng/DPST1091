#include <stdio.h>

// Function to multiply every element in the 2D array by a given scalar
void scalar_multiple(int rows, int columns, int matrix[rows][columns], int scalar) {
    for (int row = 0; row < rows; row ++) {
        for (int col = 0; col < columns; col ++) {
            matrix[row][col] = matrix[row][col] * scalar;
            // alternative way
            // matrix[row][col] *= scalar;
        }
    }
}

// Function to print the 2D array
void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3;
    int columns = 3;

    // Initialize a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int scalar = 2;

    printf("Original matrix:\n");
    print_matrix(rows, columns, matrix);

    scalar_multiple(rows, columns, matrix, scalar);

    printf("Matrix after multiplying by %d:\n", scalar);
    print_matrix(rows, columns, matrix);

    return 0;
}
