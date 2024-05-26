#include <stdio.h>

int main() {
    int n;
    char choice;

start:
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }

    printf("Do you want to continue (y/n)? ");
    scanf(" %c", &choice); // Note the space before %c to consume whitespace characters
    
    if (choice == 'y' || choice == 'Y') {
        goto start;
    } else if (choice == 'n' || choice == 'N') {
        printf("Goodbye!\n");
        printf("Thanks for using our program!\n");
   
        goto end;
    }

end:
    return 0;
}
