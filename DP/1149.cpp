#include <iostream>
#include <algorithm>
using namespace std;
int d[1001][3];
int a[1001][3];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 3; i++) {
		d[0][i] = 0;
	} // 초기값 설정


	for (int i = 1; i <= n; i++) { // 0번째 집은 없으므로 1부터 시작
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}


	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				d[i][j] = min(d[i - 1][1], d[i - 1][2]) + a[i][j];
			}
			else if (j == 1) {
				d[i][j] = min(d[i - 1][0], d[i - 1][2]) + a[i][j];
			}
			else if(j == 2){
				d[i][j] = min(d[i - 1][0], d[i - 1][1]) + a[i][j];
			}
		}
	}
	cout << min({ d[n][0],d[n][1],d[n][2] }) << '\n';
	return 0;
}