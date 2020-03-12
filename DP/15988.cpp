#include <iostream>
using namespace std;
#define mod 1000000009
long long dp[1000000];
// n�� ������ �þ ���� point 
// ���������� dp�� �Ҵ����� ���� ���������� �Ҵ��� �� + long long �̿�
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