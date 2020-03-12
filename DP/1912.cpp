#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> d(n);
	d[0] = a[0];
	for (int i = 1; i < n; i++) {
		if (d[i - 1] + a[i] > a[i])
		{
			d[i] = d[i - 1] + a[i];
		}
		else {
			d[i] = a[i];
		}
	}

	int ans = d[0];
	for (int i = 1; i < n; i++) {
		if (ans < d[i]) {
			ans = d[i];
		}
	}
	cout << ans << '\n';
	return 0;
}

/*
	������ ���� �־��� ��-> vector or ������ �׸�ŭ �迭 ����

	�� ������
	�� �����ϰ� �������� ���� ū��
	OR
	������ ����! ���� �ڱ��ڽ��� ū���� 
	���ϸ� ��!!
*/