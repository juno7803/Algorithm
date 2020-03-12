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
	}// 출력
	
	for (int i = start; i <= n; i++) {
		if (c[i] == true) {
			continue;
		}
		c[i] = true;
		a[idx] = i;
		go(idx + 1, i + 1, n, m); // start에 i+1을 넣어줘서 idx+1에선 i+1~n을 탐색하도록함
		c[i] = false;
	}
	
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, 1, n, m);
	return 0;
}