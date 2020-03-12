#include<iostream>
using namespace std;

bool prime(int n) {
// 2���� ũ�� Vn ���� ���� �� �� ������ �������� �� ������ �Ҽ� �ƴ�
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