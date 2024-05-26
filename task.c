// #include<stdio.h>
// #include<conio.h>
// int main(){
//     clrscr();
//     char a[2][3]=['a','b','c','d','e','f'];
//     int r,c;
//     for (r=0;r<=1;r++){
//         for (c=0,c<=2,c++){
//             printf("%d",a[r][c]*a[r][c]);

//         }
//         printf("\n");
//         return 0;

//     }
// }
#include <stdio.h>

int main() {
    char a[2][3] = { {'a', 'b', 'c'}, {'d', 'e', 'f'} };
    int r, c;

    for (r = 0; r < 2; r++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", a[r][c] * a[r][c]);
        }
        printf("\n");
    }

    return 0;
}
