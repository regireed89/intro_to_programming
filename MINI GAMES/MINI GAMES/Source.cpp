#include <iostream>
#include <time.h>
#include <random>
using namespace std;

void RPS()
{

	std::cout << "WELCOME TO ROCK, PAPER, SCISSOR" << std::endl;
	std::cout << "CHOOSE 1 FOR ROCK" << std::endl;
	std::cout << "CHOOSE 2 FOR PAPER" << std::endl;
	std::cout << "CHOOSE 3 FOR SCISSOR" << std::endl;
	std::cout << "ROCK BEATS SCISSORS" << std::endl;
	std::cout << "PAPER BEATS ROCK" << std::endl;
	std::cout << "SCISSOR BEATS PAPER" << std::endl;
	int i = 0;
	while (i == 0)
	{
		int x;
		std::cin >> x;

		if (x == 1)
		{
			std::cout << "you choose rock" << std::endl;
			int y = rand() % 3 + 1;
			std::cout << y;
			if (y == 1)
			{
				std::cout << "computer choose rock" << std::endl;
				std::cout << "ITS A TIE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
			else if (y == 2)
			{
				std::cout << "computer choose paper" << std::endl;
				std::cout << "YOU LOSE COMPUTER WINS" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
			else if (y == 3)
			{
				std::cout << "computer choose scissor" << std::endl;
				std::cout << "YOU WIN COMPUTER LOSE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
		}
		if (x == 2)
		{
			std::cout << "you choose paper" << std::endl;
			int y = rand() % 3 + 1;
			std::cout << y;
			if (y == 1)
			{
				std::cout << "computer choose rock" << std::endl;
				std::cout << "YOU WIN COMPUTER LOSE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
			else if (y == 2)
			{
				std::cout << "computer choose paper" << std::endl;
				std::cout << "ITS A TIE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
			else if (y == 3)
			{
				std::cout << "computer choose scissor" << std::endl;
				std::cout << "COMPUTER WIN YOU LOSE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
		}
		if (x == 3)
		{
			std::cout << "you choose scissor" << std::endl;
			int y = rand() % 3 + 1;
			std::cout << y;
			if (y == 1)
			{
				std::cout << "computer choose rock" << std::endl;
				std::cout << "COMPUTER WINS YOU LOSE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
			else if (y == 2)
			{
				std::cout << "computer choose paper" << std::endl;
				std::cout << "YOU WIN COMPUTER LOSE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
			else if (y == 3)
			{
				std::cout << "computer choose scissor" << std::endl;
				std::cout << "ITS A TIE" << std::endl;
				std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
			}
		}
		else
		{
			std::cout << "YOU TRASH TRY AGAIN" << std::endl;
			std::cout << "PLEASE CHOOSE ANOTHER NUMBER TO PLAY AGAIN" << std::endl;
		}
	}




	system("pause");
	system("cls");
}
void COIN()
{

	/*Coin Flip

		•The user should call the coin flip and if the user guesses the flip correctly
		it is a victory otherwise it is a lost.

		•Must show the outcome of the dice flip each time the dice is flipped*/


	std::cout << "WELCOME TO COIN FLIP" << std::endl;
	std::cout << "please choose 1 for heads or 2 for tails" << std::endl;
	int x;
	std::cin >> x;

	if (x == 1)
	{
		std::cout << "YOU CHOOSE HEADS" << std::endl;
	}
	if (x == 2)
	{
		std::cout << "YOU CHOOSE TAILS" << std::endl;
	}

	int f;
	f = rand() % 2 + 1;

	if (f == 1)
	{
		std::cout << "COIN WAS TAILS" << std::endl;
	}
	if (f == 2)
	{
		std::cout << "COIN WAS HEADS" << std::endl;
	}
	char w = (x == f) ? printf("YOU WIN") : printf("YOU LOSE");
	std::cout << w;

	system("pause");
	system("cls");
}
void Dice()

{

	// /*Dice Roll

	//

	// •The user will input how many times they want to roll the dice then the user will input a

	// number they believe will be lower or equal to the value of the dice after it has rolled.

	// The computer will also generate a response and who ever is closer to the value without going over wins.

	// •Must show the value of the dice to user each time the dice is rolled.*/

	//

	int x, y;

	for (int play = 0; play < 99; play++)

	{

		cout << "please input the number of timesyou wold like to roll the dice" << endl;

		cin >> x;

		cout << "please enter a number that you think the dice will roll (1-6)" << endl;

		cin >> y;

		cout << "now the computer will make a choice" << endl;







		int random;
		for (int com = 0, i = 0; i < 1; i++)
		{
			com = rand() % 6 + 1;

			printf("computer choose... %i\n", com);

			cout << "NOW THE DICE WILL ROLL" << endl;

			for (int i = 0; i < 1; i++)
			{
				random = rand() % 6 + 1;
				printf("DICE ROLLED A... %i\n", random);
			}
			if (y <= random && (com > random || com < y))
			{
				cout << "you win" << endl;
			}
			if (com <= random && (y > random || y < com))
			{
				cout << "computer wins" << endl;
			}
			if (y == random && com == random)
			{
				cout << "its a tie" << endl;
			}
			if (y > random && com > random)
			{
				cout << "yall trash" << endl;
			}
		}
		system("pause");
		system("cls");
	}
}


int main()
{
	RPS();
	COIN();
	Dice();
}