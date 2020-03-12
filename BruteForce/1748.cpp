#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long ans = 0;
	for (int start = 1, len = 1; start <= n; start *= 10, len++) {
		int end = start * 10 - 1;
		if (end > n) {
			end = n;
		}// end를 계속 키우다가 start의 최댓값인 n보다 커지만 end = n으로 바꾼다
		ans += (long long)(end - start + 1) * len;
	}
	cout << ans << '\n';
	return 0;
}