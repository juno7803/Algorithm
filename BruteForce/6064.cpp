#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int m, n, x, y;
		cin >> m >> n >> x >> y;
		x -= 1;
		y -= 1;
		bool valid = 0;
		for (int ans = x; ans < (m * n); ans += m) { // ex) m이 5라면, x를 5만큼 건너뛰고 x를 고정시키고 y값과 일치하는 것을 찾기
			// 값의 범위는 0 < = x,y <= m*n
			if (ans % n == y) {
				cout << ans + 1 << '\n';
				valid = true;
				break;
			}
		}
		if (!valid) {
			cout << -1 << '\n';
		}
	}
	return 0;
}