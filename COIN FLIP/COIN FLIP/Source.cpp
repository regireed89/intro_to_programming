#include <iostream>
int main()
{
	
	
	{
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
	}
	system("pause");
	system("cls");
}