#include "pch.h"
#include "iostream"
#include "vector"
using namespace std;
int main()
{
	const int N = 10000;
	int m = 0;
	int n = 0;
	vector<int>arr(N, 1);
	cout << "请输入";
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i]> 0)
			m++;
		else if (arr[i] == 0)
			break;
		else if (arr[i] < 0)
			n++;
	}
	cout << "正数的个数为: " << m << "\t" << "负数的个数为: " << n << "\t";
}
