#include <stdio.h>

int main() {
    int r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter number of coloumns: ");
    scanf("%d", &c);
    
    printf("Enter all the numbers:\n");
    int arr[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
