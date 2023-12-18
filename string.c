#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    while (1) {
        printf("String Operations Menu:\n");
        printf("1. Input strings\n");
        printf("2. Concatenate strings\n");
        printf("3. Copy strings\n");
        printf("4. Calculate string length\n");
        printf("5. Compare strings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                break;
            case 2:
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;
            case 3:
                strcpy(str1, str2);
                printf("First string copied into second: %s\n", str1);
                break;
            case 4:
                printf("Length of the first string: %zu\n", strlen(str1));
                printf("Length of the second string: %zu\n", strlen(str2));
                break;
            case 5:
                if (strcmp(str1, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

