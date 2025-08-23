#include <stdio.h>
#include <stdlib.h>
void menuPage();
void startquiz();
void gameRules();
void highScore();
void logout();

void menuPage()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("\n=============================================\n");
        printf("\t\tMAIN MENU\n");
        printf("=============================================\n");
        printf("1.Start Quiz\n");
        printf("2.View Rules\n");
        printf("3.View High Score\n");
        printf("4.Logout\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            startquiz();
            break;
        case 2:
            gameRules();
            break;
        case 3:
            highScore();
            break;
        case 4:
            system("cls");
            return;
        default:
            printf("\nInvalid choice! Try again.\n");

            printf("Press any key to return...");
            exit(0);
        }
    }
}
void startquiz()
{
    difficulty();
}

void difficulty()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("\n=============================================\n");
        printf("\t\tCHOOSE DIFFICULTY\n");
        printf("=============================================\n");
        printf("1.Easy / Low\n");
        printf("2.Medium\n");
        printf("3.Hard / High\n");
        printf("4.Back to Main Menu\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Easy();
            break;
        case 2:
            medium();
            break;
        case 3:
            hard();
            break;
        case 4:
            return;
        default:
            printf("\nInvalid choice! Try again.\n");
            printf("Press any key to return...");
            getch();
        }
    }
}
void Easy()
{
    printf("hello");
    printf("Press any key to return...");
    getch();
}
void medium()
{
    printf("hello");
    printf("Press any key to return...");
    getch();
}
void hard()
{
    printf("hello");
    printf("Press any key to return...");
    getch();
}

void gameRules()
{
    system("cls");

    printf("\n===============================================\n");
    printf("\t\tQUIZ GAME RULES\n");
    printf("===============================================\n");
    printf("1. The quiz contains 10 multiple-choice questions.\n");
    printf("2. Each question has 4 options: A, B, C, D.\n");
    printf("3. You must enter your choice (A/B/C/D).\n");
    printf("4. Correct Answer = +10 points\n");
    printf("5. Wrong Answer = 0 points (no negative marking)\n");
    printf("6. You cannot skip a question.\n");
    printf("7. Highest score will be saved with your name.\n");
    printf("8. You must be logged in to play and save your score.\n");
    printf("--------------------------------------------------------------\n");

    printf("\nPress any key to return to Main Menu...");
    getch();
}

void highScore()
{
    printf("zxcvb");
    printf("Press any key to return...");
    getch();
}

int main()
{
    menuPage();
    return 0;
}