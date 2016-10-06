#include <iostream>
using namespace std;

void TicTacToe()
{


	//Tic - Tac - Toe

	//	•Have all win conditions present in modern tic - tac - toe.
	//	The user or computer must not be able to override a piece already in place and 
	//	if they try to it must prompt them to enter a new location to place their piece.
	//		The game must continue to play while a victory condition or loose condition 
	//		has not been meet.

	//	•The board must be displayed in the console and after each turn the board must update.


	char TTT[3][3] = { {'1', '2', '3'},
					 { '4', '5', '6' },
					 { '7', '8', '9' } };


	cout << TTT[0][0], TTT[0][1], TTT[0][2] << endl;
	cout << TTT[1][0], TTT[1][1], TTT[1][2] << endl;
	cout << TTT[2][0], TTT[2][1], TTT[2][2] << endl;


	























	system("pause");

}
int main()
{
	TicTacToe();
}