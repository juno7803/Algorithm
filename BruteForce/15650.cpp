#include <iostream>
using namespace std;
int c[10];
int a[10];

void go(int idx, int start, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
		return;
	}// ���
	
	for (int i = start; i <= n; i++) {
		if (c[i] == true) {
			continue;
		}
		c[i] = true;
		a[idx] = i;
		go(idx + 1, i + 1, n, m); // start�� i+1�� �־��༭ idx+1���� i+1~n�� Ž���ϵ�����
		c[i] = false;
	}
	
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, 1, n, m);
	return 0;
}