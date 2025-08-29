#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"
#include "json_io.h"
#include "cJSON.c"
#include "json_io.c"

void registerPage();
void loginPage();
void mainMenu();
void playGame(int level); 
void viewRules();
void viewHighScore();
void startQuiz();
     
char username[30], password[10], email[50];

int main() {
    int choice;
    char temp;
    
    while (1)
    {
        printf(" WELCOME \n");
        printf(" [1] Register\n");
        printf(" [2] Login\n");
        printf(" [3] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
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

        printf("Press any key and Enter to go back to Main Menu:- ");
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
    printf("Enter Email: ");
    scanf("%s", email);

    cJSON *root = (cJSON_CreateObject());
    cJSON_AddStringToObject(root, "username", username);
    cJSON_AddStringToObject(root, "password", password);
    cJSON_AddStringToObject(root, "email", email);
    if(json_save("user.json", root) != 0){
        printf("Registration successful for %s!\n", username);
    } else{
        printf("Failed to save user!\n");
    }
     cJSON_Delete(root);

    cJSON *loaded = json_load("user.json");
    if(!loaded){
        printf("Load failed\n");
    } else{
        printf("Load succesfully\n"); 
        cJSON_Delete(loaded);
    }
  
}

void loginPage() {
    char inputUser[30], inputPass[10];
    printf(" Login Page\n");
    printf("Enter username: ");
    scanf("%s", inputUser);
    printf("Enter password: ");
    scanf("%s", inputPass);

    cJSON *root = json_load("user.json");
    if(!root){
        printf("Faild to loaded user.json\n");
        return;
    }

    cJSON *username = cJSON_GetObjectItemCaseSensitive(root, "username");
    cJSON *pass = cJSON_GetObjectItemCaseSensitive(root, "password");

    if(cJSON_IsString(username) && cJSON_IsString(pass)){
        if(strcmp(username->valuestring, inputUser) == 0 && strcmp(pass->valuestring, inputPass) == 0){
            printf("Login successful! Welcome %s\n", inputUser);
            mainMenu();
        } else{
            printf("Login faild!\n");
        }
    } else{
        printf("Error: Invalid data format in user.json\n");
    }
    cJSON_Delete(root);
}

void mainMenu() {
    int choice;
    while (1)
    {
        system("cls");
        printf("=================================\n");
        printf("          QUIZ GAME MENU         \n");
        printf("=================================\n");
        printf("1. Start Quiz\n");
        printf("2. View Rules\n");
        printf("3. High Score\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            startQuiz();
            break;
        case 2:
            viewRules();
            break;
        case 3:
            viewHighScore();
            break;
        case 4:
            printf("\nExiting... Goodbye!\n");
            exit(0);
        default:
            printf("\nInvalid choice! Try again.\n");
            system("pause");
        }
    }
}

void startQuiz()
{
    int level;
    system("cls");
    printf("=================================\n");
    printf("         SELECT DIFFICULTY       \n");
    printf("=================================\n");
    printf("1. High\n");
    printf("2. Medium\n");
    printf("3. Low\n");
    printf("Enter your choice: ");
    scanf("%d", &level);

    switch (level)
    {
    case 1:
        playGame(1);
        break;
    case 2:
        playGame(2);
        break;
    case 3:
        playGame(3);
        break;
    default:
        printf("Invalid choice. Returning to Main Menu...\n");
        system("pause");
    }
}

void playGame(int level)
{
    system("cls");
    printf("=================================\n");
    printf("        QUIZ GAME STARTED        \n");
    printf("=================================\n");
    if (level == 1)
    {
        printf("Difficulty: HIGH\n");
    }
    else if (level == 2)
    {
        printf("Difficulty: MEDIUM\n");
    }
    else
    {
        printf("Difficulty: LOW\n");
    }
    printf("\n(Questions not yet implemented)\n");
    printf("Returning to Main Menu...\n");
    system("pause");
}

void viewRules()
{
    system("cls");
    printf("=================================\n");
    printf("           GAME RULES            \n");
    printf("=================================\n");
    printf("1. Each correct answer = 10 points\n");
    printf("2. Wrong answer = 0 points\n");
    printf("3. You cannot skip questions\n");
    printf("4. High score will be recorded\n");
    printf("---------------------------------\n");
    system("pause");
}

void viewHighScore()
{
    system("cls");
    printf("=================================\n");
    printf("           HIGH SCORE            \n");
    printf("=================================\n");
    printf("High score feature not implemented yet.\n");
    system("pause");
}