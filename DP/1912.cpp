#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> d(n);
	d[0] = a[0];
	for (int i = 1; i < n; i++) {
		if (d[i - 1] + a[i] > a[i])
		{
			d[i] = d[i - 1] + a[i];
		}
		else {
			d[i] = a[i];
		}
	}

	int ans = d[0];
	for (int i = 1; i < n; i++) {
		if (ans < d[i]) {
			ans = d[i];
		}
	}
	cout << ans << '\n';
	return 0;
}

/*
	정수의 범위 주어질 때-> vector or 실제로 그만큼 배열 선언

	이 문제는
	쭉 연속하고 있을때의 합이 큰지
	OR
	연속을 끊고! 지금 자기자신이 큰지를 
	비교하면 됨!!
*/