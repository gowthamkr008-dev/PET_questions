#include<stdio.h>
 
char board[3][3] = { 
    {'1','2','3'}, 
    {'4','5','6'}, 
    {'7','8','9'} 
}; 
 
void displayBoard() 
{ 
    printf("\n"); 
    for(int i = 0; i < 3; i++) 
    { 
        for(int j = 0; j < 3; j++) 
        { 
            printf(" %c ", board[i][j]); 
            if(j < 2) printf("|"); 
        } 
        printf("\n"); 
        if(i < 2) printf("---|---|---\n"); 
    } 
    printf("\n"); 
} 
 
int checkWin() 
{ 
    // Rows and columns 
    for(int i = 0; i < 3; i++) 
    { 
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) 
            return 1; 
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) 
            return 1; 
    } 
 
    // Diagonals 
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
        return 1; 
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
        return 1; 
 
    return 0; 
} 
 
int main() 
{ 
    int player = 1, choice; 
    char mark; 
    int row, col; 
    int moves = 0; 
 
    do 
    { 
        displayBoard(); 
        player = (player % 2) ? 1 : 2; 
        mark = (player == 1) ? 'X' : 'O'; 
 
        printf("Player %d, enter your choice: ", player); 
        scanf("%d", &choice); 
 
        row = (choice - 1) / 3; 
        col = (choice - 1) % 3; 
 
        if(choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] 
!= 'O') 
        { 
            board[row][col] = mark; 
            moves++; 
 
            if(checkWin()) 
            { 
                displayBoard(); 
                printf("🎉 Player %d wins!\n", player); 
                return 0; 
            } 
 
            player++; 
        } 
        else 
        { 
            printf("Invalid move! Try again.\n"); 
        } 
 
    } while(moves < 9); 
 
    displayBoard(); 
    printf("🤝 Game Draw!\n"); 
 
    return 0; 
} 