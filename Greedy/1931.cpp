#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(pair<int, int>(b, a));
	}
	sort(v.begin(), v.end());

	int end = v[0].first; //  pair�� ù��° ���ҿ� ����
	int ans = 1;
	for (int i = 1; i < n; i++) {
		if (end <= v[i].second) { // pair�� �ι�° ���ҿ� ����
			end = v[i].first; 
			ans += 1;
		}
	}
	cout << ans << '\n';
	return 0;
}