#include <iostream>
using namespace std;
#define mod 9901
long long d[100001][3];
// i�� ������ 1<= 1 <=n �̹Ƿ� idx�� 1���� �����ϹǷ�!

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			d[1][0] = 1;
			d[1][1] = 1;
			d[1][2] = 1;
			continue;
		}// �ʱ�ȭ
		d[i][0] = (d[i - 1][0] + d[i - 1][1] + d[i - 1][2])%mod;
		d[i][1] = (d[i - 1][0] + d[i - 1][2])%mod;
		d[i][2] = (d[i - 1][0] + d[i - 1][1])%mod;
	}

	cout << (d[n][0] + d[n][1] + d[n][2])%mod << '\n';
	return 0;
}