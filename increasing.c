// #include<stdio.h>

// void increasing(int n){
//     if(n == 5) return;
//     printf("%d\n", n); // Print the current number
//     increasing(n + 1); // Recursively call increasing function with the next number
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     increasing(1); // Start printing from 1
//     return 0;
// }
// increasing decreasing 
#include <stdio.h>

void print_decreasing_increasing(int n) {
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    print_decreasing_increasing(n - 1);
    printf("%d ", n);
}

int main() {
    int n = 4;
    print_decreasing_increasing(n);
    return 0;
}
