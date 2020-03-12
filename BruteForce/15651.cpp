#include <iostream>
using namespace std;
int a[10];

void go(int idx, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		a[idx] = i;
		go(idx + 1, n, m);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, n, m);
	return 0;
}