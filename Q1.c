
#include <stdio.h>
#include <string.h>

int main() {
    char feedback[200];
    char updated[250];
    char *ptr;
    int len;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    // 1. Count total characters
    len = strlen(feedback);
    printf("Total characters: %d\n", len);

    // 2. Check if "good" or "bad" exists
    if (strstr(feedback, "good") != NULL) {
        printf("The word 'good' was found in the feedback.\n");
    }

    if (strstr(feedback, "bad") != NULL) {
        printf("The word 'bad' was found in the feedback.\n");
    }

    // 3. Replace "bad" with "not good"
    ptr = strstr(feedback, "bad");

    if (ptr != NULL) {
        *ptr = '\0';

        strcpy(updated, feedback);
        strcat(updated, "not good");
        strcat(updated, ptr + 3);

        printf("Updated review: %s\n", updated);
    }
    else {
        printf("Updated review: %s\n", feedback);
    }

    return 0;
}
