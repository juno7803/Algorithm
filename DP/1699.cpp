#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> d(n+1);
	for (int i = 1; i <= n; i++) {// for(1)
		d[i] = i;
		for (int j = 1; j * j <= i; j++) { // for(2)
			if (d[i] > d[i - j * j] + 1) {
				d[i] = d[i - j * j] + 1;
			}
		}
	}
	cout << d[n] << '\n';
	return 0;
}
/*
	d[7]을 구하기 위해 d[1]부터 순서대로 구하는 것이고,
	d[0]은 문제에서 없기 때문에  for(1)의 범위가 1 <= i <= n 이 된 것임
*/