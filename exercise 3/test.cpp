#include <cassert>
#include <iostream>
using namespace std;
int a{}, b{}, gcd{};
int GCD(int a, int b)
{
	if (a == 0)
	{
		return abs(b);
	}
	else if (b == 0)
	{
		return abs(a);
	}
	else
	{
		for (float i{ 1 }; i <= abs(a) && i <= abs(b); i++)
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
#ifdef NDEBUG
	cerr << "Tests run with NDEBUG defined (asserts compiled out)";
	abort();
#endif
	assert(GCD(4, 6) == 2);
	assert(GCD(3, 6) == 3);
	assert(GCD(-2, 2) == 2);
	assert(GCD(-6, 9) == 3);
	assert(GCD(-4, -3) == 1);
	assert(GCD(6, 5) == 1);
	assert(GCD(0, 1) == 1);
	assert(GCD(0, 0) == 0);
	assert(GCD(-3, 0) == 3);
	assert(GCD(120, 105) == 15);
	assert(GCD(12, 18) == 6);
	cout << "All test succeeded.";
	return 0;
}