#include <iostream>
using namespace std;

template <typename T1, typename T2>
void swap(T1& a, T2& b) {
	T1 c = a;
	a = b;
	b = c;
}

int main()
{
	int a = 5;
	double b = 2.55;
	cout << a << '' << b << '\n';
	swap <int, double >(a, b);
	cout << a << '' << b << '\n';

}