#include<iostream>
using namespace std;
int go(int sum, int goal) {
	if (sum > goal) return 0;
	if (sum == goal) return 1;
	int status = 0;
	for (int i = 1; i <= 3; i++) {
		status += go(sum + i, goal);
	}
	return status;
}
int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << go(0,n) << '\n';
	}
	return 0;
}