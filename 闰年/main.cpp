#include "pch.h"
#include "iostream"

using namespace std;

int main()
{
	int year;
	cout << "请输入年份" << endl;
	cin >> year;
	while(cin.bad() || cin.fail() || year <= 0) {
		cout << "输入不合法，请重新输入" << endl;
		cin >> year;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 3200 != 0) || year % 172800 == 0)
		cout << year << "年是闰年" << endl;
	else
		cout << year << "年不为闰年" << endl;
}
