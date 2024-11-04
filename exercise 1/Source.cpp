#include <iostream>
using namespace std;
int n;
int f(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		long int F = x * f(x - 1);
		return F;
	}
}
int main()
{
	cout << "FACTORIAL OPERATION\n" << "To find n!, n is a whole number, input the value of n.\n";
	cout << "n = ";
	cin >> n;
	cout << "n! = " << f(n);
	return 0;
}
