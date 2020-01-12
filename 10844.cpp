#include <iostream>
using namespace std;
int DP[101][10];
#define num 1000000000

int main()
{
	int i, j, k, n;
	int sum = 0;
	cin >> n;

	for (j = 1; j <= 9; j++)
	{
		DP[1][j] = 1;
	}

	for (i = 2; i <= n; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				DP[i][j] = (DP[i - 1][j + 1]) % num;
			else if (j == 9)
				DP[i][j] = (DP[i - 1][j - 1]) % num;
			else
				DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % num;
		}
	}

	for (k = 0; k < 10; k++)
	{
		sum = (sum+DP[n][k])%num;
	}
	cout << sum << endl;
	return 0;
}