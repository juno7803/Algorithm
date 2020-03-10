#include<iostream>
#include<vector>
using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

int main() {
	int n; // 1<= b <= 10^5
	int s; // 1<= s <= 10^9
	cin >> n >> s;
	vector<int>a;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		int abnum = abs(tmp - s);
		a.push_back(abnum);
	}

	
	int D = a.at(0);
	for (int i = 1; i < n; i++) {
		D = gcd(D, a.at(i));
	}
	cout << D << "\n";

	return 0;
}