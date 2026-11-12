#include <stdio.h>
#include <string.h>

int main() {

    char email[100];
    char domain[100];
    char *ptr;

    printf("Enter employee email address: ");
    fgets(email, sizeof(email), stdin);

    // Remove newline character
    email[strcspn(email, "\n")] = '\0';

    // Find the @ symbol
    ptr = strchr(email, '@');

    if (ptr != NULL) {

        // Copy everything after @ into domain
        strcpy(domain, ptr + 1);

        printf("Domain name: %s", domain);
    }
    else {
        printf("Invalid email address. @ not found.");
    }

    return 0;
}