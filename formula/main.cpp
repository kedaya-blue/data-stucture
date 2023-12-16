#include "pch.h"
#include "iostream"
using namespace std;

static void formula(float a,float b,float c) {
	float d;
	float x1, x2;
	if (a == 0&&b!=0){
		cout << "有一个实数根" << endl;
		x1 = -c / b;
		cout << x1 << endl;
	}
	else if (a == 0 && b == 0) {
		cout << "错误,请重新输入" << endl;
	}
	else if(a!=0){
		d = sqrt(pow(b, 2) - 4 * a * c);
	if (d > 0) {
		cout << "有两个实数根" << endl;
		x1 = (d - b) / (2 * a);
		x2 = (-d - b) / (2 * a);
		cout << x1 << "\n" << x2 << endl;
	}
	else if (d == 0) {
		cout << "有一个实数根" << endl;
		x1 = x2 = (d - b) / (2 * a);
		cout << x1 << endl;
	}
	cout << "无实数根" << endl;
	}

}
int main()
{
	float a, b,  c;
	while (1) {
		cin >> a >> b >> c;
		formula(a, b, c);
	}
}
