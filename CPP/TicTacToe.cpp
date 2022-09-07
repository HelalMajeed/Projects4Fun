// #TIC-TAC-TOE****#CRESCENT****#2022-AUG-15

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class XOgame {
private:
	static const int boardSize = 3;
	static const int maxMoves = 9;
	static const int minMov2Win = 5;
	char boardList[boardSize][boardSize];
	int count;
	bool checkForWins(char player) const;
	bool checkForDraw() const;
	void fillBoard();
	char changePlayer(char player);

public:
	XOgame();
	void display()const;
	void getMove(char player);
	void playGame();
};

XOgame::XOgame() {
	count = 0;
	fillBoard();
}

void XOgame::fillBoard() {
	for(int i=0; i<boardSize; i++) {
		for(int j=0; j<boardSize; j++) {
			boardList[i][j] = ' ';
		}
	}
}

void XOgame::display()const {
	cout << "--------------\n";
	for(int i=0; i<boardSize; i++) {
		cout << " | ";
		for(int j=0; j<boardSize; j++) {
			cout << boardList[i][j] << " | ";
		}
	}
	cout << "--------------\n";
}

void XOgame::getMove(char player){
	//variables
	string input; //stores our input
	char char_entered; //takes the character entered for evaluation
	int num_entered, row, col, index; //help set our play on the board.
	
	while (true) {
		cout << player << " Where do you want to play? Select a number from 1-9: " << endl;
		getline(cin, input);

		if (input != "") {
			//Since we are checking for a correct move
			//we convert string into a cstring for easier comparison.
			char_entered = input.c_str()[0];
			if (char_entered >= '1' && char_entered <= '9') {
				//If the input is between the desired range, convert it into an int.
				num_entered = char_entered - '0';
				//Use this number to find index and store the move into our board.
				index = num_entered - 1; //this way if user enters 1 it means index 0 of board.

				//we can use division and the remainder, in order to find the correct row and column. 
				row = index / 3; 
				col = index % 3; 
				//check if the position on the board is empty (correct move), else it's wrong move.
				char b_pos = boardList[row][col];
				if (b_pos != 'X' && b_pos != 'O') {
					//if correct move, place mark on board and we can move onto the next turn
					boardList[row][col] = player;
					count++;
					break; 
				}
				else
					cout << "Wrong move. Position is already taken. Try again" << endl;
			}
			else
				cout << "You must enter a number between 1-9 to make your move." 
				<< "Try again. \n";
		}
		else 
			cout << "You must enter something!!" << endl;
	}
	cout << "Total moves: " << this->count<< endl;
}

char XOgame::changePlayer(char player) {
	player = player == 'X' ? 'O' : 'X';
	return(player);

	if (count >= minMov2Win) {
		//check rows for winner
		if (boardList[0][0] == player && boardList[0][1] == player && boardList[0][2] == player) {
			return true;
		}
		if (boardList[1][0] == player && boardList[1][1] == player && boardList[1][2] == player)
		{
			return true;
		}
		if (boardList[2][0] == player && boardList[2][1] == player && boardList[2][2] == player)
		{
			return true;
		}
		//columns
		if (boardList[0][0] == player && boardList[1][0] == player && boardList[2][0] == player)
		{
			return true;
		}
		if (boardList[0][1] == player && boardList[1][1] == player && boardList[2][1] == player)
		{
			return true;
		}
		if (boardList[0][2] == player && boardList[1][2] == player && boardList[2][2] == player)
		{
			return true;
		}
		//Accross
		if (boardList[0][0] == player && boardList[1][1] == player && boardList[2][2] == player)
		{
			return true;
		}
		if (boardList[0][2] == player && boardList[1][1] == player && boardList[2][0] == player)
		{
			return true;
		}

	}
	return false;
}

void XOgame::playGame() {
	char player = 'X';
	bool gameOver = false;
	//single game iteration
	do {
		display();
		getMove(player);
		if (checkForWins(player)) {
			cout << "\n *********** WE HAVE A WINNER!! ***********" << endl
			 << player << "WINS!!";
			gameOver = true;
		}
		else if (checkForDraw()) {
			cout << "IT'S A DRAW! Play again!" << endl;
			gameOver = true;
		}
		player = changePlayer(player);
	} while (!gameOver);

	display();

}

int main() {
	XOgame myGame;
	myGame.playGame();
	return(0);
}
