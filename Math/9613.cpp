// GCD �� : 9613
#include<iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a[111];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long sum = 0;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(a[i], a[j]);
			}
		}
		cout << sum << '\n';
	}
	return 0;
}