#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    printf("Enter all the numbers:\n");
    int arr[n][n];
    // input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // transpose
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // printf("%d ", arr[i][j]);
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number of row4s and columns: ");
//     scanf("%d", &n);
    
//     printf("Enter all the numbers columns-wise:");
//     int arr[n][n];
    
//     // input
//     for (int i = 0; i < n; i++) {
//         printf("Enter elements of row %d: ", i + 1);
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
    
//     // Print the entered matrix
//     printf("The entered matrix is:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
