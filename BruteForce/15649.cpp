#include <iostream>
using namespace std;
bool c[10];
int a[10];

void go(int idx, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}// 출력 코드
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (c[i]) {
			continue;	// c[i] == true 이면 이미 썼다는 뜻이므로 continue
		}
		c[i] = true; // 순서대로 a[idx]에 i 채우는 코드 - 썼으므로 c[i] = true
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