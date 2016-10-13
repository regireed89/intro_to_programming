#include <iostream>
#include "RPS.h"
void Application::Start()
{



	std::cout << "WELCOME TO ROCK, PAPER, SCISSOR" << std::endl;
	std::cout << "CHOOSE 1 FOR ROCK" << std::endl;
	std::cout << "CHOOSE 2 FOR PAPER" << std::endl;
	std::cout << "CHOOSE 3 FOR SCISSOR" << std::endl;
	std::cout << "ROCK BEATS SCISSORS" << std::endl;
	std::cout << "PAPER BEATS ROCK" << std::endl;
	std::cout << "SCISSOR BEATS PAPER" << std::endl;
}

void Application::Run()
{
	Update();
}



void Application::Update()
{

	int i = 0;
	while (i == 0)
	{	
		bool gameover = false;
		while (gameover != true)
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
	}


	

	system("pause");


}
void Application::Shutdown()
{
	gameover = true;
}

int main()
{
	
	Application* app = new RPS;

	if (app->Start())
	{
		app->Run;
	}
	else
	{
		app->Shutdown;
	}





	system("pause");
}