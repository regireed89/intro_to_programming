#include <iostream>
using namespace std;

int Tip(int array_pop[], int array_size)
{
	array_pop[10] = { 3, 5, 8, 2, 78, 4 };
	int a, b;
	for (int i = 0; i < array_size; i++)
	{
		if (array_pop[a] < array_pop[i])
		{
			cout << array_pop[a];
		}
		if (array_pop[b] > array_pop[i])
		{
			cout << array_pop[b];
		}
		int sum = a + b;
		cout << sum;

		return sum;
	}
}

int main()
{

	Tip(array_pop[], array_size);
	

}