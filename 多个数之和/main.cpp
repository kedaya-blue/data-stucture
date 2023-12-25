#include "pch.h"
#include "iostream"
#include "math.h"
#include "vector"
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cout << "请输入要输入的数的个数" << endl;
	cin >> n;
	while (cin.bad() || cin.fail() || n <= 0) {
		cout << "输入不合法，请重新输入" << endl;
		cin >> n;
	}
	vector<int>arr(n,0);
	cout << "请输入数字" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "总和为：" << sum << endl;
}
