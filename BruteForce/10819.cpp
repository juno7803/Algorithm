#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	sort(a.begin(), a.end());
	// ★중요★
	// '모든 순열'을 next_permutation 이용해서 구하려면, 첫 순열이 필요함!
	// 첫 순열이란, 정렬되었을때의 첫번재 수열!(따라서 정렬이 필수임)
	do {
		int tmp = 0;
		for (int i = 1; i < n; i++) {
			tmp += abs(a[i] - a[i - 1]);
		}
		if (ans <= tmp) {
			ans = tmp;
		}
	} while (next_permutation(a.begin(), a.end()));
	cout << ans << '\n';
	return 0;
}