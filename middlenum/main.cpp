#include "pch.h"
#include <iostream>

using namespace std;

int main(void)
{
	int a[3]{};
	int n;
	cout << "请输入三个数" << endl;
	cin.sync();
	for (int i = 0; i<3; i++) {
		cin >> a[i];
		while (1) {
			if (cin.fail()||cin.bad()) {
				cout << "输入不合法，请重新输入" << endl;
			}
			else
				break;
			cin.clear();
			cin.ignore();
			cin >> a[i];
		}
	}
	for (int i = 0; i<3; i ++) {
		for (int j = 0; j<3; j ++) {
			if (a[i] >= a[j]) {
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	}
	cout << a[1];

}
