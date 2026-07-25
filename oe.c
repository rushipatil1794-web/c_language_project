#include <stdio.h>

char board[] = {'0','1','2','3','4','5','6','7','8','9'};

void printBoard()
{
    printf("\n\n");
    printf("=== TIC TAC TOE ===\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
    printf("     |     |     \n\n");
}

int checkWin()
{
    /* Rows */
    if(board[1]==board[2] && board[2]==board[3]) return 1;
    if(board[4]==board[5] && board[5]==board[6]) return 1;
    if(board[7]==board[8] && board[8]==board[9]) return 1;

    /* Columns */
    if(board[1]==board[4] && board[4]==board[7]) return 1;
    if(board[2]==board[5] && board[5]==board[8]) return 1;
    if(board[3]==board[6] && board[6]==board[9]) return 1;

    /* Diagonals */
    if(board[1]==board[5] && board[5]==board[9]) return 1;
    if(board[3]==board[5] && board[5]==board[7]) return 1;

    int i, count = 0;

    for(i = 1; i <= 9; i++)
    {
        if(board[i] == 'X' || board[i] == 'O')
        {
            count++;
        }
    }

    if(count == 9)
        return 0;   // Draw

    return -1;      // Game Continue
}

int main()
{
    int player = 1;
    int choice, result = -1;
    char mark;

    while(result == -1)
    {
        printBoard();

        if(player == 1)
            mark = 'X';
        else
            mark = 'O';

        printf("Player %d [%c], Enter Position (1-9): ", player, mark);
        scanf("%d", &choice);

        if(choice < 1 || choice > 9)
        {
            printf("\nInvalid Position! Try Again.\n");
            continue;
        }

        if(board[choice] == 'X' || board[choice] == 'O')
        {
            printf("\nPosition Already Occupied! Try Again.\n");
            continue;
        }

        board[choice] = mark;

        result = checkWin();

        if(result == 1)
        {
            printBoard();
            printf("\n Player %d Wins!\n", player);
            break;
        }
        else if(result == 0)
        {
            printBoard();
            printf("\n Game Draw!\n");
            break;
        }

        if(player == 1)
            player = 2;
        else
            player = 1;
    }

    return 0;
}
