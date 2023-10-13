// AUTHOR: Lucas Horsman
// DATE: 10/11/23
// Purpose: In this program you can play rock paper scissors against the computer.
#include <stdio.h>
#include <stdlib.h>
int computerWinCount =0;
int playerWinCount =0;
int tieCount =0;

// Generate Computer Choice
int computerChoice()
{
    
    int x = rand() % 3;
    return x;
}
// get choice from the user
char getUserChoice()
{

    char choice = getchar();
    if(choice == EOF){
        return EOF;
    }
    getchar();

    if (choice != 'R' && choice != 'P' && choice != 'S' && choice != 'r' && choice != 'p' && choice != 's' && choice != EOF)
    {
        printf("Invalid input\n");
        return choice;
    }
    else
    {
        return choice;
    }
}

// Compare Choices
// Determine winner, player or computer?
// return 0 if tie,1 if computer wins, 2 if player wins
int compareChoices(char userChoice, char computerChoice)
{
    if (userChoice == computerChoice)
    {
        tieCount++;
        return 0;
    }
    else if (userChoice == 'r' && computerChoice == 'p')
    {
        computerWinCount++;
        return 1;
    }
    else if (userChoice == 'r' && computerChoice == 's')
    {
        playerWinCount++;
        return 2;
    }
    else if (userChoice == 'p' && computerChoice == 'r')
    {
        playerWinCount++;

        return 2;
    }
    else if (userChoice == 'p' && computerChoice == 's')
    {
        computerWinCount++;
        return 1;
    }
    else if (userChoice == 's' && computerChoice == 'r')
    {
        computerWinCount++;
    
        return 1;
    }
    else if (userChoice == 's' && computerChoice == 'p')
    {
        playerWinCount++;
        return 2;
    }
}

// converts inputs from computer and user to char for printing
char choiceToChar(int choice)
{
    switch (choice)
    {
    case 1:
        return 'r';
        break;
    case 2:
        return 'p';
        break;
    case 3:
        return 's';
        break;
    default:

        break;
    }
}

int main()
{
    // run game until user quits
    char userChoice;
    int result = 9;
    printf("Lets Play Rock Paper Scissors! \nEnter r for Rock, p for Paper, or s for Scissors\n");

    while (userChoice != EOF)
    {
    userChoice = getUserChoice();

        int compChoice = computerChoice();
        result = compareChoices(userChoice, choiceToChar(compChoice));
        printf("You chose: %c\n", userChoice);
        printf("Computer chose: %c\n", choiceToChar(compChoice));
        
        switch (result)
        {
        case 0:
            printf("Tie\n");
            break;
        case 1:
            printf("You Lose\n");
            break;
        case 2:
            printf("You Win!\n");
            break;
        }
        printf("Play again by entering r, p, or s\n");
    }
    printf("You won %d times\n, the computer won %d times, you tied %d times",playerWinCount, computerWinCount,tieCount);
}
