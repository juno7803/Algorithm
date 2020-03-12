#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10000 ;
int dp[1001];
int p[1001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
		dp[i] = MAX;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j] + p[j]);
		}
	}

	cout << dp[n] << '\n';
	return 0;
}
/*
	이번엔 금액의 최솟값
*/