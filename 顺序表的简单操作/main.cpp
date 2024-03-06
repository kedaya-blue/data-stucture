#include "pch.h"
#include "iostream"

using namespace std;
#define Initsize 100
typedef struct {
	int *data;
	int length;
	int maxsize;
}sqList;
sqList Initlize(sqList& L) {
	if ((L.data = new int[Initsize]) == NULL) {
		cout << "存储空间申请失败" << endl;
		exit(1);
	}
	L.length = 0;
	L.maxsize = Initsize;
	return L;
}
static sqList Insert(sqList& L, int m, int k) {
	if (k<1 || k>L.length)
		cout << "插入位置不合法" << endl;
	if (L.length == L.maxsize)
		cout << "数列已满，无法插入" << endl;
	for (int i = L.length; i >= k; i--) {
		L.data[i] = L.data[i-1];
	}
	L.data[k-1] = m;
	L.length++;
	return L;
}
static sqList Delete(sqList& L, int k) {
	if (k<1 || k>L.length)
		cout << "删除位置不合法" << endl;
	if (L.length == 0)
		cout << "数列为空，无法删除" << endl;
	for (int i = k; i <L.length; i++) {
		L.data[i - 1] = L.data[i];
	}
	L.length--;
	return L;
}
static void Find(sqList& L, int m) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == m) {
			cout << "下标为" << i << endl;
			break;
		}
	}
}
int main()
{
	sqList L{};
	Initlize(L);
	int m, k;
	L.data = new int[100];
	for (int i = 0; i < 30; i++) {
		L.data[i] = i;
		L.length++;
	}
	cout << "请输入要插入的数据、位置" << endl;
	cin >> m >> k;
	Insert(L, m, k);
	cout << L.data[k-1] << endl;
	cout << "请输入要删除的数据的位置" << endl;
	cin >> k;
	Delete(L, k);
	cout << "请输入要查找的值" << endl;
	cin >> m;
	Find(L, m);


}
