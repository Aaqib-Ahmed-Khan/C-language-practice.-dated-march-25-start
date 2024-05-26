// #include <stdio.h>

// int main() {
//     int choice;
//     char yn;

// start:
//     printf("1. Karachi\n");
//     printf("2. Islamabad\n");
//     printf("Enter choice: ");
//     scanf("%d", &choice);

//     if (choice == 1) {
//         printf("You chose Karachi.\n");
//         goto karachi;
//     } else if (choice == 2) {
//         printf("You chose Islamabad.\n");
//         goto islamabad;
//     } else {
//         printf("Wrong choice! Do you want to continue (y/n): ");
//         scanf(" %c", &yn); // Use %c to scan a character
//         if (yn == 'y' || yn == 'Y') {
//             goto start;
//         } else {
//             goto end;
//         }
//     }

// karachi:
//     printf("Welcome to Karachi!\n");
//     // Code for Karachi
//     goto end;

// islamabad:
//     printf("Welcome to Islamabad!\n");
//     // Code for Islamabad
//     goto end;

// end:
//     printf("thanks for using our program.\n");
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int choice;
//     char yn;

// start:
//     printf("1. Karachi\n");
//     printf("2. Islamabad\n");
//     printf("Enter choice: ");
//     scanf("%d", &choice);

//     if (choice == 1) {
//         printf("You chose Karachi.\n");
//         goto karachi;
//     } else if (choice == 2) {
//         printf("You chose Islamabad.\n");
//         goto islamabad;
//     } else {
//         printf("Wrong choice! Do you want to continue (y/n): ");
//         scanf(" %c", &yn); // Use %c to scan a character
//         if (yn == 'y' || yn == 'Y') {
//             goto start;
//         } else {
//             goto end;
//         }
//     }

// karachi:
//     printf("Welcome to Karachi!\n");
//     // Code for Karachi
//     goto start; // Go back to start to ask for another choice

// islamabad:
//     printf("Welcome to Islamabad!\n");
//     // Code for Islamabad
//     goto start; // Go back to start to ask for another choice

// end:
//     printf("End of the program.\n");
//     return 0;
// }
#include <stdio.h>

int main() {
    int choice;
    char yn;

start:
    printf("1. Karachi\n");
    printf("2. Islamabad\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // printf("You chose Karachi.\n");
        printf("Welcome to Karachi!\n");
        // Code for Karachi

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &yn); // Use %c to scan a character
        if (yn == 'y' || yn == 'Y') {
            goto start;
        } else {
            goto end;
        }
    } else if (choice == 2) {
        // printf("You chose Islamabad.\n");
        printf("Welcome to Islamabad!\n");
        // Code for Islamabad

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &yn); // Use %c to scan a character
        if (yn == 'y' || yn == 'Y') {
            goto start;
        } else {
            goto end;
        }
    } else {
        printf("Wrong choice!\n");
        goto start;
    }

end:
    printf("End of the program.\n");
    return 0;
}
