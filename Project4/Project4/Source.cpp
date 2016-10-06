#include <iostream>
using namespace std;

float sum(float a, float b, float c);

int main()
{
	float a;
	float b;
	float c;
	cin >> a >> b >> c;
	float q = sum(a, b, c);
	cout << sum << endl;
	system("pause");
}

float sum(float a, float b, float c)
{
	
	float sum = a + b + c;
	float answer = sum * 5;
	return answer;
	
}











