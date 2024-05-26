#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Add last column numbers
    int sum_last_col = 0;
    for (int i = 0; i < rows; i++) {
        sum_last_col += matrix[i][cols - 1]; // Iterate up to cols - 1
    }

    // Print the sum of last column numbers
    printf("Sum of numbers in the last column: %d\n", sum_last_col);

    return 0;
}

