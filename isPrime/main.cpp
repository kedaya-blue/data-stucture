#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;

void isPrime1(int n) {
	int *arr;
	arr = (int*)malloc(50);
	long long int k;
	int m = 0;
	int n1 = n;
	if (n == 1||n==2)
		cout << "素数为:" <<n<< endl;
	else 
		while (n > 2) {
		for (int i = 1; i < n; i++) {
			if (i != n) {
				k = pow(i, n - 1);
				arr[i] = k % n;
				if (arr[i] == 1)
					m++;
			}
		}

		if (m == n-1) {
			cout << "素数为：" << n << endl;
		}
		m = 0;
		n--;
	}
}
static void isPrime(int n) {
	int k;
	int m=0;
	while (n > 0) {
		for (int i = 1; i < n; i++) {
			k = n % i;
			if (k == 0)
				m++;
		}
		if (m == 1||n==1) {
			cout << "素数为：" << n << endl;
			break;
		}
		n--;
		m = 0;
	}
}
int main()
{
	int n;
	cout << "请输入一个数" << endl;
	cin >> n;
	while (1) {
		if (cin.fail() || cin.bad()||n<=0)
			cout << "输入不合法，请重新输入" << endl;
		else
			break;
		cin.clear();
		cin.ignore();
		cin >> n;
	}
	isPrime(n);
}
