#include <iostream>
#include <algorithm>
using namespace std;
int d[100001][3];
int a[100001][3];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i][0];
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i][1];
		}

		d[0][0] = d[0][1] = d[0][2] = 0;
		for (int i = 1; i <= n; i++) {
			d[i][0] = max({ d[i - 1][0], d[i - 1][1], d[i - 1][2] });
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
		}
		/*
			d[i][0] : 뜯지 않음
			d[i][1] : 지금 위쪽 스티커를 뜯음(=a[i][0] 추가 한 경우 - a는 위쪽스티커가 a[i][0]임 / i-1에선 안뜯거나 아래쪽 뜯은 상태)
			d[i][2] : 지금 아래쪽 스티커를 뜯음(=a[i][1] 추가 한 경우 - a는 아래쪽스티커가 a[i][1]임 / i-1에선 안뜯거나 위쪽 뜯은 상태)
		*/
		cout << max({ d[n][0], d[n][1],d[n][2] }) << '\n';
	}
	return 0;
}