#include <iostream>
#include <algorithm>
using namespace std;

int DP[1001]; // DP[n]�� n���� ī�带 �����ϴ� �ݾ��� �ִ�
int P[10001]; // P[n]�� n���� ī�带 ���� ī������ ����


int main()
{
	int n, p;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		cin >> p;
		P[i] = p;
	} // ī���� ���� �Է�

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