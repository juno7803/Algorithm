#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	sort(a.begin(), a.end());
	// ���߿��
	// '��� ����'�� next_permutation �̿��ؼ� ���Ϸ���, ù ������ �ʿ���!
	// ù �����̶�, ���ĵǾ������� ù���� ����!(���� ������ �ʼ���)
	do {
		int tmp = 0;
		for (int i = 1; i < n; i++) {
			tmp += abs(a[i] - a[i - 1]);
		}
		if (ans <= tmp) {
			ans = tmp;
		}
	} while (next_permutation(a.begin(), a.end()));
	cout << ans << '\n';
	return 0;
}