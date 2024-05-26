#include <stdio.h>

int main() {
    char a[2][4] = {
        {'X', 'y', 'z', 'P'},
        {'m', 'N', 'o', 'q'}
    };
    int r, c;

    for (r = 0; r < 2; r++) {
        for (c = 0; c < 4; c++) {
            if (a[r][c] >= 'a' && a[r][c] <= 'z') {
                printf("L ");
            } else {
                printf("U ");
            }
        }
        printf("\n");
    }

    return 0;
}
