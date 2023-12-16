#include "pch.h"
#include "iostream"
#include "vector"

using namespace std;
int main()
{
	long long int m, n,c;
	cout << "请输入" << endl;
	cin >> m >> n;
	while (cin.fail() || cin.bad() || m == 0||n==0) {
		cout << "输入不合法，请重新输入" << endl;
		cin >> m >> n;
	}
	int divisor[100000]{};
	c = m + n;
		//vector<vector<vector<int>>>divisor(m, vector < vector<int>>(m, vector<int>(m,0)));
		if (divisor) {
			for (int i = 0; i <c; i++) {
				if (m % (static_cast<long long>(i) + 1) == 0 && n % (static_cast<long long>(i) + 1) == 0) {
					divisor[i] = 1;
				}
				else
					divisor[i] = 0;
			}
			while (m > 0) {
				if (divisor[m-1] == 1) {
					cout << "最大公约数为" << m << endl;
					break;
				}
				else
					m--;

			}
		}
	
}
