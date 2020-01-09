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

// �������� 10007�� ������� ������, n�� ���� 1000�� ����� �� ����
// ������ �Ѿ�Ƿ� long long ���ε� ������ �ȵ�. ���� dp[n]�� ���� �� ���� 10007�� �����ֱ�!