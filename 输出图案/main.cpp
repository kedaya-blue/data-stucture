#include "pch.h"
#include "iostream"

using namespace std;
static void output(int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
static void output1(int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = n; j >i; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	output(n);
	output1(n);
}
