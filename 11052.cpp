#include <iostream>
#include <algorithm>
using namespace std;

int DP[1001]; // DP[n]은 n개의 카드를 지불하는 금액의 최댓값
int P[10001]; // P[n]은 n개의 카드를 가진 카드팩의 가격


int main()
{
	int n, p;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		cin >> p;
		P[i] = p;
	} // 카드팩 가격 입력

	DP[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			DP[i] = max(DP[i - j] + P[j], DP[i]);
		}
	}
	cout << DP[n] << endl;

	return 0;
}