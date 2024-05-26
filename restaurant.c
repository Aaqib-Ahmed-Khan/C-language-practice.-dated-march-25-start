#include <stdio.h>

int main() {
    int choice, subChoice;
    char yn;

start:
    printf("Welcome to My Restaurant!\n");
    printf("Menu:\n");
    printf("1. Mutton\n");
    printf("2. Bread\n");
    printf("3. Chicken\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You chose Mutton.\n");
        printf("Mutton Dishes:\n");
        printf("1. Mutton Karahi\n");
        printf("2. Mutton Pulao\n");
        printf("3. Mutton Handi\n");
        printf("4. Mutton Qorma\n");
        printf("Enter your choice: ");
        scanf("%d", &subChoice);
        if (subChoice == 1) {
            printf("You chose Mutton Karahi.\n");
        } else if (subChoice == 2) {
            printf("You chose Mutton Pulao.\n");
        } else if (subChoice == 3) {
            printf("You chose Mutton Handi.\n");
        } else if (subChoice == 4) {
            printf("You chose Mutton Qorma.\n");
        } else {
            printf("Invalid choice!\n");
        }
    } else if (choice == 2) {
        printf("You chose Bread.\n");
        // Code for Bread
    } else if (choice == 3) {
        printf("You chose Chicken.\n");
        // Code for Chicken
    } else {
        printf("Invalid choice!\n");
    }

    printf("Do you want to continue (y/n): ");
    scanf(" %c", &yn);
    if (yn == 'y' || yn == 'Y') {
        goto start;
    } else {
        printf("Thanks for coming to our restaurant!\n");
    }

    return 0;
}