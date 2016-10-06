#include <iostream>

#include <time.h>

#include <random>

using namespace std;

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

	Dice();

}
