#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[10][10];
#define max 100000000 // 1억-최솟값 구하기 위함
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	vector<int>d(n); // a의 방문순서
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
		}//d 0번째부터 d n-1 번째까지 합(0인경우는 제외)
		if (ok && a[d[n - 1]][d[0]] != 0) {
			sum += a[d[n - 1]][d[0]];
			if (ans > sum) {
				ans = sum; 
			}// 최솟값
		}// d n-1번째에서 d 0으로 돌아오는 경우 추가
	} while (next_permutation(d.begin(), d.end()));
	cout << ans << '\n';
	
	return 0;
}
