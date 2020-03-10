#include <iostream>
using namespace std;

int dp[1001],n;
int main()
{
	dp[1] = 1;
	dp[2] = 2;
	cin >> n;
	if (n > 2)
	{
		for (int i = 3; i <= n; i++)
		{
			dp[i] = (dp[i - 1] + dp[i - 2])%10007;
		}
	}
	cout << dp[n] << endl;
	return 0;
}

// 문제에서 10007로 나누라는 이유는, n의 값이 1000에 가까워 질 수록
// 범위를 넘어서므로 long long 으로도 감당이 안됨. 따라서 dp[n]을 구할 때 부터 10007로 나눠주기!
