#include <iostream>
using namespace std;

//int main() {
//	int e, s, m;
//	int ans = 1;
//	cin >> e >> s >> m;
//
//	int ey, sy, my;
//	ey = sy = my = 1;
//	while (1) {
//		if (ey == e && sy == s && my == m) {
//			cout << ans << '\n';
//			return 0;
//		}
//		ey += 1;
//		sy += 1;
//		my += 1;
//		ans += 1;
//		if (ey == 16) {
//			ey = 1;
//		}
//		if (sy == 29) {
//			sy = 1;
//		}
//		if (my == 20) {
//			my = 1;
//		}
//	}
//	return 0;
//}

int main() {
	int e, s, m;
	cin >> e >> s >> m;
	e -= 1;
	s -= 1;
	m -= 1;
	int year = 0;
	while (1) {
		year += 1;
		if (year % 15 == e && year % 28 == s && year % 19 == m) {
			cout << year + 1 << '\n';
			return 0;
		}
	}	
	return 0;
}