#include<iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		cout << lcm(a, b) << "\n";
	}
	return 0;
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else{
		return gcd(b, a % b);
	}
} // Àç±Í ±¸Çö

int lcm(int a, int b) {
	return (a * b / gcd(a, b));
}