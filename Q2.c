
#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50];
    char temp[50];
    int len;

    // Taking input of 10 student names
    printf("Enter 10 student names:\n");

    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        // Removing the newline character
        len = strlen(names[i]);

        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    // Bubble sort using strcmp and strcpy
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {

            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Displaying the sorted list
    printf("\nSorted Student Names:\n");

    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
