#include <stdio.h>

int main() {
    char a[2][3] = { {'x', 'y', 'z'}, {'m', 'n', 'o'} };
    int r, c;

    for (r = 0; r < 2; r++) {
        for (c = 0; c < 3; c++) {
            printf("%3d ", a[r][c]);
        }
        printf("\n");
    }

    return 0;
}
