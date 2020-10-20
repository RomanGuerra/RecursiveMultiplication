// Recursive Multiplication

#include <iostream>
using namespace std;

int multiply(int, int);

int main()
{
	int x;
	int y;

	cout << "\nThis program multiplies two values using recursion.\n" << endl;

	cout << "Enter first value: ";
	cin  >> x;
	cout << "Enter second value: ";
	cin  >> y;

	
	cout << "Product: " << multiply(x, y) << "\n" << endl;
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