#include <iostream>
#include <vector>
using namespace std;
int a[10];
int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	} // �ʱ�ȭ

	int cnt = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (k >= a[i]) {
			while (k >= a[i]) {
				k = k - a[i];
				cnt += 1;
			} // �׸��� -> idx�� ū a���� k���� ��
		}
	}
	cout << cnt << '\n';
	return 0;
}