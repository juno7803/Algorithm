#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001];
int n;
int main()
{
	// 문제 입력
	cin >> n; 
	// 예외 처리 : n=1인 경우는 0
	dp[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1; // dp[n] = dp[n-1]+1 인 경우
		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1); // dp[n] = dp[n/2]+1 인 경우
		if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1); // dp[n] = dp[n/3]+1 인 경우 
	}
	cout << dp[n] << endl;
	return 0;
}
