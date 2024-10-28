#include <cassert>
//#include <cstdlb>
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
		return x * f(x - 1);
	}
}
int test_f()
{
#ifdef NDEBUG
	cerr << "Tests run with NDEBUG defined (asserts compiled out)";
	abort();
#endif
	assert(f(0) == 1);
	assert(f(1) == 1);
	assert(f(2) == 2);
	assert(f(3) == 6);
	assert(f(5) == 120);
	cout << "All tests succeeded.\n";
	return 0;
}
int main()
{
	test_f();
	return 0;
}