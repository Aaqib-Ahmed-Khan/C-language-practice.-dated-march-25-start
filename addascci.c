#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);

    int sum_even_index = 0;
    int total_ascii_sum = 0;

    // Calculate the sum of ASCII values of even index letters
    for (int i = 0; name[i] != 0; i += 2) {
        sum_even_index += name[i];
    }

    // Calculate the total sum of ASCII values of all letters
    for (int i = 0; name[i] != 0; i++) {
        total_ascii_sum += name[i];
    }

    // Calculate the difference
    int difference = sum_even_index - total_ascii_sum;

    printf("The difference: %d\n", difference);

    return 0;
}
