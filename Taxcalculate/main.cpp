#include "pch.h"
#include "iostream"
using namespace std;

static void title() {
	cout << "================================================" << endl;
	cout << "                  税率计算器" << endl;
	cout << "================================================" << endl;
	cout << "请输入数字选择" << endl;
	cout << "1.已知未含税价格求总价" << endl;
	cout << "2.已知总价求未含税价格" << endl;
}

static void Tax() {
	int a;
	float circle;
	float num;
	float taxrate = 0;
	float tax = 0;
	float price = 0;
	float total = 0;
	float singleprice;
	float singletax;
	cin >> a;
		switch (a)
		{

		case(1):
			cout << "请输入税率、价格" << endl;
			cin >> taxrate >> price;

			tax = price * (taxrate / 100);
			total = price + tax;
			cout << "含税价格为：" << total << endl;
			cout << "税为：" << tax << endl;
			cout << "是否需要继续输入？若是请输入1" << endl;
			cin >> circle;
			if (circle == 1) {
				title();
				Tax();
			}
			break;
		case(2):
			cout << "请输入税率、总价、个数" << endl;
			cin >> taxrate >> total >> num;
			price = total / (1 + taxrate / 100);
			singleprice = price / num;
			tax = total - price;
			singletax = tax / num;
			cout << "不含税总价为：" << price << endl;
			cout << "不含税单价为：" << singleprice << endl;
			cout << "总税为：" << tax << endl;
			cout << "单个税为：" << singletax << endl;
			cout << (singleprice + singletax) * num << endl;
			cout << "是否需要继续输入？若是请输入1" << endl;
			cin >> circle;
			if (circle == 1) {
				title();
				Tax();
			}
			break;
		default:
			cout << "您输入的数字有误，请重新输入" << endl;
			title();
			Tax();
			break;
		}
}


int main()
{
	title();
	Tax();
}
