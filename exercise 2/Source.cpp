#include <iostream>
using namespace std;
int a{}, b{};
int sum(int a, int b)
{
	return a + b;
}
int product(int a, int b)
{
	return a * b;
}
int main()
{
	cout << "To calculate the sum and product of integers a and b, input the following values.\n" << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << a << " + " << b << " = " << sum (a, b) << '\n' << a << " x " << b << " = " << product(a, b);
	return 0;
}
