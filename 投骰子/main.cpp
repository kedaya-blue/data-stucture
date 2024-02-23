#include "pch.h"
#include "iostream"


using namespace std;
enum Status
{
	Playing, Win, Lose
};
static int rollDice() {
	int n1 = 1 + rand() % 6;
	int n2 = 1 + rand() % 6;
	int sum = 0;

	sum = n1 + n2;
	cout << "你掷出了" << n1 << "+" << n2 <<"="<<sum<< endl;
	return sum;
}
int main()
{
	int n=0;
	int sum=0;
	int mypoint = 0;
	Status status;
	cout << "请输入一个无符号整数" << endl;
	cin >> n;
	srand(n);
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		status = Win;
		break;
	case 2:
	case 3:
	case 12:
		status = Lose;
		break;
	default:
		status = Playing;
		mypoint = sum;
		cout << "我的点数为" << mypoint << endl;
		break;
	}
	if (status == Win) {
		cout << "和数为: " << sum <<endl<<"player wins"<< endl;
	}
	if (status == Lose) {
		cout << "和数为: " << sum <<endl<< "player loses" << endl;
	}
	while (status == Playing) {
		if (mypoint == rollDice()) {
			status = Win;
			cout << "和数为: " << sum <<endl<< "player wins" << endl;
		}
		else if (rollDice() == 7) {
			status = Lose;
			cout << "和数为: " << sum <<endl<< "player loses"<< endl;
		}
	}
}
