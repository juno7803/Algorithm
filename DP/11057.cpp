#include <iostream>
using namespace std;
#define mod 10007
int d[1001][10];


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i == 1) {
				d[i][j] = 1;
				continue;
			}
			for (int k = j; k <= 9; k++) {
				d[i][j] = (d[i][j] + d[i - 1][k])%mod;
				// 요거 대신
				// d[i][j] += d[i-1][k]
				// d[i][j] %= mod 이렇게 해도 가능
			}
		}
	}

	int ans = 0;
	for (int j = 0; j <= 9; j++) {
		ans = (ans + d[n][j]) % mod;
	}
	cout << ans << '\n';
	return 0;
}