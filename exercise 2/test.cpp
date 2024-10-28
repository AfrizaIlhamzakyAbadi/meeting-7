#include <cassert>
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
#ifdef NDEBUG
	cerr << "Tests run with NDEBUG defined (asserts compiled out)";
	abort();
#endif
	assert(sum(0, 0) == 0);
	assert(sum(1, -2) == -1);
	assert(sum(1, 1) == 2);
	assert(product(1, 0) == 0);
	assert(product(1, -3) == -3);
	assert(product(2, 4) == 8);
	cout << "All tests succeeded.";
	return 0;
}