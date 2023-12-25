#include "pch.h"
#include "iostream"
#include "vector"
using namespace std;

int main()
{
	int n;
	cout << "请输入一个整数" << endl;
	cin >> n;
	while (cin.bad() || cin.fail()) {
		cout << "输入不合法，请重新输入" << endl;
		cin >> n;
	}
	vector<int>arr(n, 0);
	arr[0] = 1;
	arr[static_cast<std::vector<int, std::allocator<int>>::size_type>(n) - 1] = n;
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0)
			arr[i] = i;
	}
	cout << "因子为";
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0)
			cout << arr[i]<<" ";
	}
}
