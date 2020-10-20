// Recursive Multiplication

#include <iostream>
using namespace std;

int multiply(int, int);

int main()
{
	int x;
	int y;

	cout << "This program multiplies two values." << endl;

	cout << "Enter first value: ";
	cin  >> x;
	cout << "Enter second value: ";
	cin  >> y;

	
	cout << "Product: " << multiply(x, y) << endl;
	return 0;
}

int multiply(int x, int y)
{
	if (x > 1)
	{		
		return y + multiply(--x, y);
	}
	else
	{
		return y;
	}
}