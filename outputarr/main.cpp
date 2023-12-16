#include "pch.h"
#include <iostream>
#include <vector>
#include <random>
using namespace std;
static int getRand() {
	return rand();
}
static int Output(int arr[], int n) {
	if (n > 0) {
		cout << arr[n] << endl;;
		return Output(arr, n - 1);
	}
}
int main()
{
	int a;
	cout << "请输入数组长度" << endl;
	cin >> a;
	while (cin.fail() || cin.bad() || a == 0) {
		cout << "输入不合法，请重新输入" << endl;
		cin >> a;
	}
	int* arr;
	arr = (int*)malloc(a);
	for (int i = 0; i < a; i++) {
		arr[i] = getRand();
	}
	Output(arr, a);
}
