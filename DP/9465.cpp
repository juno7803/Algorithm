#include <iostream>
#include <algorithm>
using namespace std;
int d[100001][3];
int a[100001][3];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i][0];
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i][1];
		}

		d[0][0] = d[0][1] = d[0][2] = 0;
		for (int i = 1; i <= n; i++) {
			d[i][0] = max({ d[i - 1][0], d[i - 1][1], d[i - 1][2] });
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
		}
		/*
			d[i][0] : ���� ����
			d[i][1] : ���� ���� ��ƼĿ�� ����(=a[i][0] �߰� �� ��� - a�� ���ʽ�ƼĿ�� a[i][0]�� / i-1���� �ȶ�ų� �Ʒ��� ���� ����)
			d[i][2] : ���� �Ʒ��� ��ƼĿ�� ����(=a[i][1] �߰� �� ��� - a�� �Ʒ��ʽ�ƼĿ�� a[i][1]�� / i-1���� �ȶ�ų� ���� ���� ����)
		*/
		cout << max({ d[n][0], d[n][1],d[n][2] }) << '\n';
	}
	return 0;
}