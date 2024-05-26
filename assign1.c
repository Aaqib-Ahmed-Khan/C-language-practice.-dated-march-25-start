//  #include <stdio.h>

// int main() {
//     // Initialize the marks array and the names array
//     int marks[10] = {42, 45, 22, 25, 24, 30, 28, 
//     50, 48, 35};
//     char names[10][11] = {"Alice", "Bob", "Charlie", "David", "Eva", 
//                           "Frank", "Grace", "Hank", "Ivy", "Jack"};

//     printf("Students who failed (marks less than 25):\n");

//     // Iterate over the students
//     for (int i = 0; i < 10; i++) {
//         if (marks[i] < 25) {
//             // Print the name of the student who failed
//             printf("%s\n", names[i]); // '%s' is the format specifier for strings
//         }
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int num[10] = {2, 4, 6, 5, 7, 8, 6, 12, 14, 16};
    int sumeven = 0;
    int sumodd = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            sumeven += num[i];
        } else {
            sumodd += num[i];
        }
    }

    int res = sumeven - sumodd;
    printf("%d\n", res);  // Removed '&' before 'res'

    return 0;
}
