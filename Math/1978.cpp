#include<iostream>
using namespace std;

bool prime(int n) {
// 2보다 크고 Vn 보다 작은 수 중 나누어 떨어지는 게 있으면 소수 아님
	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;

	int pnum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (prime(num)) {
			pnum += 1;
		}
	}
	cout << pnum << "\n";

	return 0;
}