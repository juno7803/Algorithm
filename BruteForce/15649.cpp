#include <iostream>
using namespace std;
bool c[10];
int a[10];

void go(int idx, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}// ��� �ڵ�
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (c[i]) {
			continue;	// c[i] == true �̸� �̹� ��ٴ� ���̹Ƿ� continue
		}
		c[i] = true; // ������� a[idx]�� i ä��� �ڵ� - �����Ƿ� c[i] = true
		a[idx] = i;
		go(idx+1, n, m);
		c[i] = false;
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	go(0, n, m);
	return 0;
}