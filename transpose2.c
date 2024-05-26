#include <stdio.h>

int main() {
    int r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    printf("Enter all the numbers:\n");
    int mat[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", mat[j][i]); // Access elements transposed: arr[j][i]
        }
        printf("\n");
    }
    
    return 0;
}
