// #include <stdio.h>
// int main()
// {
//    int i ;
//    char str[4];
//    printf("aaqib");
//    scanf("%[^\n]",str);
//    i=0;
//    while(str[i]!=^\0){
//     printf("ascii value of'%c' is %d\n",str[i],str[i]);
//    }
//    getch();
// }
// #include <stdio.h>
// #include <conio.h>

// int main() {
//     int i ;
//     char str[6];
    
//     printf("Enter a string: ");
//     scanf("%5[^\n]",&str);

//     i = 0;
//     while(str[i] != '\0') {
//         printf("ASCII value of '%c' is %d\n", str[i], str[i]);
//         i++;
//     }

//     getch();
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>

// int main() {
//     int i, sum = 0;
//     char str[6]; // Assuming maximum length of input is 99 characters

//     printf("Enter a string: ");
//     scanf("%s", str); // Read the input string

//     // Calculate the sum of ASCII values of characters
//     for (i = 0; str[i] != '\0'; i++) {
//         sum += str[i]; // Add the ASCII value of each character to sum
//     }

//     printf("Sum of ASCII values of characters in your name: %d\n", sum);

//     getch();
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// int main() {
//     char str[] = "aaqib"; // Input string
//     int length = strlen(str); // Length of the string

//     printf("Original string: %s\n", str);
//     printf("Reversed string: ");

//     // Iterate over the characters of the string in reverse order
//     for (int i = length - 1; i >= 0; i--) {
//         printf("%c", str[i]); // Print each character
//     }

//     getch();
//     return 0;
// }
#include <stdio.h>
#include <conio.h>

int main() {
    char str[] = "aaqib"; // Input string
    int length = 0;

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Original string: %s\n", str);

    // Swap characters from the beginning and end of the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    getch();
    return 0;
}
