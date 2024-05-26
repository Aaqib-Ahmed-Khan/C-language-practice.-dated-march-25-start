#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    char matrix[ROWS][COLS];
    int r, c; // Variables to iterate over the rows and columns

    // Initialize the matrix with spaces
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            matrix[r][c] = ' ';
        }
    }

    // Set 'a' in the 2nd row and 3rd column
    r = 1; // Indexing starts from 0, so row 2 corresponds to index 1
    c = 2; // Indexing starts from 0, so column 3 corresponds to index 2
    matrix[r][c] = 'a';

    // Print the matrix
    printf("Matrix:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%c ", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}
