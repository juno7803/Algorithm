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
		for (int ans = x; ans < (m * n); ans += m) { // ex) m�� 5���, x�� 5��ŭ �ǳʶٰ� x�� ������Ű�� y���� ��ġ�ϴ� ���� ã��
			// ���� ������ 0 < = x,y <= m*n
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