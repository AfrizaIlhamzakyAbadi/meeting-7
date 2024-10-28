#include <iostream>
using namespace std;
int a{}, b{};
void sum(int a, int b)
{
	cout << a + b;
}
void product(int a, int b)
{
	cout << a * b;
}
int main()
{
	cout << "To calculate the sum and product of integer a and b, input the following values.\n" << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << a << " + " << b << " = ";
	sum(a, b);
	cout << '\n' << a << " x " << b << " = ";
	product(a, b);
	return 0;
}