#include "pch.h"
#include "iostream"

using namespace std;
static long long int Fibonacci(int n) {
	if (n < 1)
		return 0;
	else if (n == 1)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
	int n;
	cin >> n;
	cout<< Fibonacci(n);
}
