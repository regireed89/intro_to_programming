#include <iostream>
int main()
{

	int a;
	 	    int b;
			char operation;
	 		std::cout << "enter two numbers and an operation +, -, *, /, or %";
	 		std::cin >> a >> operation >> b;
	 		{
	 			if (operation == +)
	 			{
	 				int c = a + b;
	 				std::cout << c;
	 			}
	
	 			else if (operation == -
	 			{
	 				int c = a - b;
	 				std::cout << c;
	 			}
	
	 			else if (operation == *)
	 			{
	 				int c = a * b;
	 				std::cout << c;
	 			}
	
	 			else if (operation == /)
	 			{
	 				int c = a / b;
	 				std::cout << c;
	 			}
	
	 			else if (operation == %)
	 			{
	 				int c = a % b;
	 				std::cout << c;
	 			}

	 			else
	 			{
	 				std::cout << "da fuck u doin";
	 			}
	 		}
	 		system("pause");
























































}