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
	}// �ʱ�ȭ
	sort(a.begin(), a.end()); // �������� ����
	int sum = a[0];
	for (int i = 1; i < n; i++) {
		a[i] = a[i] + a[i - 1];
		sum += a[i];
	}
	cout << sum << '\n';

	return 0;
}