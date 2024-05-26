#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    
    printf("Enter all the numbers:\n");
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
