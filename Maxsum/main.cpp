#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;
static int Sum(int a[],int m,int n) {
	int k=a[m];
	if (m > n) {
		int c = m;
		m = n;
		n = c;
	}
	if (m == n)
		cout << a[m] << endl;
	while (m < n) {
		k = k + a[m + 1];
		m++;
	}
	return k;
}
int main()
{
	int k;
	int m, n,max;
	cout << "请输入数组长度" << endl;
	cin >> k;
	int* arr;
	vector<vector<int>> arr1(k, vector<int>(k));
	arr = (int*)malloc(k);
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < k; i++) {
		for (int j = i; j < k; j++) {
			arr1[i][j] = Sum(arr, i, j);
		}
	}
	max = arr1[0][0];
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			if (arr1[i][j] > max)
				max = arr1[i][j];
		}
	}
	cout << "最大值" << max << endl;
}
