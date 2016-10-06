#include <iostream>
using namespace std;


void Reverse()
{
	char name[] = "dylan";
	for (int i = 0; i < 5; i++)
	{
		char temp = name[i];
		name[i] = name[5 - i];
		name[5 - i] = temp;
	}

	system("pause");
	
}

int main()
{
	Reverse();
}


