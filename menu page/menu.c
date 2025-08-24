#include <stdio.h>
#include <stdlib.h>

void mainMenu();
void startQuiz();
void viewRules();
void viewHighScore();
void playGame(int level);

int main()
{
    mainMenu();
    return 0;
}

void mainMenu()
{
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

        switch (choice)
        {
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
