#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char username[30], password[10];

int main() {
    int choice;
    char temp;

    while (1) {  
        printf(" WELCOME \n");
        printf(" [1] Register\n");
        printf(" [2] Login\n");
        printf(" [3] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

   switch (choice) {
    case 1:
            registerPage();
                break;

     case 2:
            loginPage();
                break;

     case 3:
          printf("Exit Successful!\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }

        
        printf("Press any key and Enter to go back to Main Menu");
        scanf(" %c", &temp);
    }

    return 0;
}


void registerPage() {
    printf("Register Page\n");
    printf("Enter new username: ");
    scanf("%s", username);
    printf("Enter new password: ");
    scanf("%s", password);
    printf("Registration successful for %s!\n", username);
}

void loginPage() {
    char inputUser[30], inputPass[10];
    printf(" Login Page\n");
    printf("Enter username: ");
    scanf("%s", inputUser);
    printf("Enter password: ");
    scanf("%s", inputPass);

    if (strcmp(username, inputUser) == 0 && strcmp(password, inputPass) == 0) {
        printf("Login successful! Welcome %s.\n", inputUser);
    } else {
        printf("Login failed! Username or password incorrect.\n");
    }
}

