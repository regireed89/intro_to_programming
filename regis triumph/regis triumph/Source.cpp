#include <iostream>

struct Zambie
{
	int health;
	bool alive;
	int spirit;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
int Fight(Zambie &z, Ninja &n)
{
	std::cout << "zambie is attacking ninja" << std::endl;
	n.health -= 10;
	std::cout << "the ninja took 10 damage his health is now ->" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "the zambie attacked so his spirit is now ->" << z.spirit << std::endl;
	return 1;
}
int Fight(Ninja &n, Zambie &z)
{
	std::cout << "ninja is attacking zambie" << std::endl;
	z.health -= 10;
	std::cout << "the zambie took 10 damage his health is now ->" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "the ninja attacked his chi is now ->" << n.chi << std::endl;
	//fighting is when a zambie "does damage" to a ninja
	//fighting is when a ninja "does damage" to a zambie
	//"damage" is when we decrement the health variable of a ninja or zambie
	//in order to do "damage" you must "attack"
	//"attack" is able to be performed if you have positive chi if you are a ninja or positive spirit if you a zambie
	return 1;
}
int main()
{
	Zambie chris = { 100, true, 15 };
	Zambie matthew = { 100, true, 15 };
	Ninja regi = { 100, true, 15 };
	Ninja wilson = { 100, true, 15 };
	char input = '0';
	std::cout << "INSTRUCTIONS" << std::endl;
	std::cout << "choose r to attack as regi, c to attack as chris, w to attack wilson, or m to attack matthew" << std::endl;

	std::cout << "regi can only attack chris, and chris can only attack regi." << std::endl;
	std::cout << "wilson can only attack matthew, and matthew can only attack wilson. " << std::endl;
	std::cout << "you can change attackers at any time by choosing one of the characters above" << std::endl;
	while (input != 'q')
	{
		std::cin >> input;
		system("cls");
		if (input == 'c')
		{
			if (chris.alive == false)
			{
				std::cout << "CANT ATTACK IF YOUR DEAD" << std::endl;
			}
			else
			{
				if (chris.spirit <= 0)
				{
					std::cout << "NO ENERGY " << std::endl;
					std::cout << "PLEASE CHOOSE A DIFFERENT CHARACTER OR PRESS q TO QUIT" << std::endl;
				}
				else
				{
					std::cout << "CHRIS FIGHT REGI" << std::endl;
					Fight(chris, regi);
				}
				if (regi.health <= 0)
				{
					printf("wasted.... GAME OVER\n");
					printf("get guhd lol. \n \a");
					regi.alive = false;
				}
			}
		}

		if (input == 'r')
		{
			if (regi.alive == false)
			{
				std::cout << "CANT ATTACK IF YOUR DEAD" << std::endl;
			}
			else
			{
				if (regi.chi <= 0)
				{
					std::cout << "NO ENERGY" << std::endl;
					std::cout << "PLEASE CHOOSE A DIFFERENT CHARACTER OR q TO QUIT" << std::endl;

				}
				else
				{
					std::cout << "REGI FIGHT CHRIS" << std::endl;
					Fight(regi, chris);
				}
				if (chris.health <= 0)
				{

					std::cout << "HELL YEAH CHRIS DEAD REGI WINS!!!" << std::endl;
					std::cout << "PLEASE CHOOSE A DIFFERENT CHARACTER OR q TO QUIT" << std::endl;
					chris.alive = false;
				}
			}
		}
		if (input == 'm')
		{
			if (matthew.alive == false)
			{
				std::cout << "CANT ATTACK IF YOUR DEAD" << std::endl;
			}
			else
			{
				if (matthew.spirit <= 0)
				{
					std::cout << "NO ENERGY" << std::endl;
					std::cout << "PLEASE CHOOSE A DIFFERENT CHARACTER OR q TO QUIT" << std::endl;
				}
				else
				{
					std::cout << "MATTHEW FIGHT WILSON" << std::endl;
					Fight(matthew, wilson);
				}
				if (wilson.health <= 0)
				{
					printf("wasted.... GAME OVER\n");
					printf("get guhd lol. \n \a");
					wilson.alive = false;
				}
			}
		}

		if (input == 'w')
		{
			if (matthew.alive == false)
			{
				std::cout << "CANT ATTACK IF YOUR DEAD" << std::endl;
			}
			else
			{
				if (wilson.chi <= 0)
				{
					std::cout << "NO ENERGY";
					std::cout << "PLEASE CHOOSE A DIFFERENT CHARACTER OR q TO QUIT";
				}
				else
				{
					std::cout << "WILSON FIGHT MATTHEW" << std::endl;
					Fight(wilson, matthew);
				}
				if (matthew.health <= 0)
				{
					std::cout << "HELL YEAH MATTHEW DEAD WILSON WINS!!!" << std::endl;
					std::cout << "PLEASE CHOOSE ANOTHER CHARACTER" << std::endl;
					matthew.alive = false;
				}
			}
		}


















	}

	system("pause");
	//how i fight??
	return 0;
}