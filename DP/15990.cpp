#include<iostream>
using namespace std;
int dp[100001][4];
#define max 1000000009
int main() {
	for (int i = 0; i < 100000; i++) {
		if (i - 1 >= 0) {
			dp[i][1] = dp[i - 1][2] + dp[i - 1][3];
			if (i == 1) {
				dp[i][1] = 1;
			}
		}
		else if (i - 2 >= 0) {
			dp[i][2] = dp[i - 2][1] + dp[i - 2][3];
			if (i == 2) {
				dp[i][2] = 1;
			}
		}
		else if (i - 3 >= 0) {
			dp[i][3] = dp[i - 3][1] + dp[i - 3][2];
			if (i == 3) {
				dp[i][3] = 1;
			}
		}
		dp[i][1] %= max;
		dp[i][2] %= max;
		dp[i][3] %= max;
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << (dp[n][1] + dp[n][2] + dp[n][3]) << '\n';
	}
	return 0;
}


/*
	같은 수를 두번 이상 연속해서 사용하면 안된다
	1 -> 1
	2 -> 2
	3 -> 1,2 / 2,1 / 3
	4 -> 1,3
	  -> 1,2,1 / 3,1
	
*/