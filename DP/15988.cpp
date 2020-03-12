#include <iostream>
using namespace std;
#define mod 1000000009
long long dp[1000000];
// n의 범위가 늘어난 것이 point 
// 지역변수로 dp를 할당하지 말고 전역변수로 할당할 것 + long long 이용
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		if (n >= 4) {
			for (int i = 4; i <= n; i++) {
				dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3])%mod;
			}
		}
		cout << dp[n] << '\n';
	}
	return 0;
}