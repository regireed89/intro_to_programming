#include <iostream>
int main()
{
	/*int x;

	for (x = 100; x > 0; x-=2)
	{
		printf("%i", x);
		system("pause");
		
	}*/

	int y;

	for (y = 0; y <= 100; y++)

	{
		if (y % 3 == 0)
		{
			printf("fizz");
		}
		if (y % 5 == 0)
		{
			printf("buzz");
		}
		if (y % 3 == 0 && y % 5 == 0)
		{
			printf("Fizzbuzz");
		}
		else
		{
			printf("%i", y);
			system("pause");
			
		}
	}

	/*int z;

	for (z = 0; z <= 1000; z % 3)
	{
		if (z % 3)
		{
			
	}*/
}