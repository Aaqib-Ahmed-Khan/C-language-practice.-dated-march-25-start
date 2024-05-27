#include <stdio.h>


int main() {
    char word[50];
    printf("Enter a string: ");
    scanf("%s", word);

    char replace_char, replacement_char;
    printf("Enter the character to replace: ");
    scanf(" %c", &replace_char);
    printf("Enter the replacement character: ");
    scanf(" %c", &replacement_char);

    for (int i = 0; word[i] != 0; i++) {
        if (word[i] == replace_char) {
            word[i] = replacement_char;
        }
    }

    printf("Modified string: %s\n", word);
printf("Modified string: %s\n", word);
    return 0;
}
