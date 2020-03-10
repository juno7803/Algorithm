#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[10][10];
#define max 100000000 // 1��-�ּڰ� ���ϱ� ����
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	vector<int>d(n); // a�� �湮����
	for (int i = 0; i < n; i++) {
		d[i] = i;
	}

	int ans = max;
	do {
		bool ok = true;
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[d[i]][d[i + 1]] == 0) {
				ok = false;
			}
			else {
				sum += a[d[i]][d[i + 1]];
			}
		}//d 0��°���� d n-1 ��°���� ��(0�ΰ��� ����)
		if (ok && a[d[n - 1]][d[0]] != 0) {
			sum += a[d[n - 1]][d[0]];
			if (ans > sum) {
				ans = sum; 
			}// �ּڰ�
		}// d n-1��°���� d 0���� ���ƿ��� ��� �߰�
	} while (next_permutation(d.begin(), d.end()));
	cout << ans << '\n';
	
	return 0;
}