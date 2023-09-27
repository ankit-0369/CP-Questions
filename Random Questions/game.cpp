#include <iostream>
#include <string>

using namespace std;

// Global constants for the game board
const int ROWS = 3;
const int COLS = 3;

// Global constants for the players
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

// Global constants for the game states
const char IN_PROGRESS = ' ';
const char PLAYER1_WINS = 'X';
const char PLAYER2_WINS = 'O';
const char TIE = 'T';

// Function prototypes
char checkGameStatus(char[][COLS]);
void displayBoard(char[][COLS]);
void makeMove(char[][COLS], char);

int main() {
    char board[ROWS][COLS];
    char currentPlayer = PLAYER1;
    char gameStatus = IN_PROGRESS;

    // Initialize the game board
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = ' ';
        }
    }

    // Play the game
    while (gameStatus == IN_PROGRESS) {
        displayBoard(board);
        makeMove(board, currentPlayer);
        gameStatus = checkGameStatus(board);
        currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
    }

    // Display the final game board
    displayBoard(board);

    // Display the result of the game
    if (gameStatus == TIE) {
        cout << "The game ended in a tie." << endl;
    } else {
        cout << "Player " << gameStatus << " wins!" << endl;
    }

    return 0;
}

// This function checks the current status of the game and returns one of the following constants:
// IN_PROGRESS, PLAYER1_WINS, PLAYER2_WINS, or TIE.
char checkGameStatus(char board[][COLS]) {
    // Check for a win by player 1
    for (int i = 0; i < ROWS; i++) {
        if (board[i][0] == PLAYER1 && board[i][1] == PLAYER1 && board[i][2] == PLAYER1) {
            return PLAYER1_WINS;
        }
    }
    for (int i = 0; i < COLS; i++) {
        if (board[0][i] == PLAYER1 && board[1][i] == PLAYER1 && board[2][i] == PLAYER1) {
            return PLAYER1_WINS;
        }
    }
    if (board[0][0] == PLAYER1 && board[1][1] == PLAYER1 && board[2][2] == PLAYER1) {
        return PLAYER1_WINS;
    }
    if (board[0][2] == PLAYER1 && board[1][1] == PLAYER1 && board[2][0] == PLAYER1) {
        return PLAYER1_WINS;
    }
for (int i = 0; i < ROWS; i++) {
        if (board[i][0] == PLAYER2 && board[i][1] == PLAYER2 && board[i][2] == PLAYER2) {
            return PLAYER2_WINS;
        }
    }
    for (int i = 0; i < COLS; i++) {
        if (board[0][i] == PLAYER2 && board[1][i] == PLAYER2 && board[2][i] == PLAYER2) {
            return PLAYER2_WINS;
        }
    }
    if (board[0][0] == PLAYER2 && board[1][1] == PLAYER2 && board[2][2] == PLAYER2) {
        return PLAYER2_WINS;
    }
    if (board[0][2] == PLAYER2 && board[1][1] == PLAYER2 && board[2][0] == PLAYER2) {
        return PLAYER2_WINS;
    }

    // Check for a tie
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == ' ') {
                return IN_PROGRESS;
            }
        }
    }

    return TIE;
}

// This function displays the current game board
void displayBoard(char board[][COLS]) {
    cout << endl;
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << endl;
}

// This function prompts the current player to make a move and updates the game board
void makeMove(char board[][COLS], char player) {
    int row, col;
    cout << "Player " << player << ", enter your move (row column): ";
    cin >> row >> col;
    board[row][col] = player;
}