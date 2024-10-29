#include <iostream>
using namespace std;
int a{}, b{}, gcd{};
int GCD(int a, int b)
{
	if (a == 0)
	{
		return abs (b);
	}
	else if (b == 0)
	{
		return abs (a);
	}
	else
	{
		for (float i{ 1 }; i <= abs (a) && i <= abs (b); i++)
		{

			int A = a / i, B = b / i;
			if (a / i - A == 0.0 && b / i - B == 0.0)
			{
				gcd = i;
			}
		}
		return gcd;
	}
}
int main()
{
	cout << "To find greatest common divisor of a and b, input the following values.\n" << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "GCD(" << a << ", " << b << ") = " << GCD(a, b);
	return 0;
}