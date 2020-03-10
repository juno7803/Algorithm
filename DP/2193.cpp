#include <iostream>
using namespace std;
long long DP[91];

int main()
{
	int n;
	DP[1] = 1;
	DP[2] = 1;

	cin >> n;

	if (n >= 3)
	{
		for (int i = 3; i <= n; i++)
		{
			DP[i] = DP[i - 1] + DP[i - 2];
		}
	}
	cout << DP[n] << endl;
	
	return 0;
}
