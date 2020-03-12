//1406번 - 에디터
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<char> left;
	// 여기의 가운데에 커서가 위치한다고 생각
	stack<char> right;

	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		left.push(a[i]);
	}

	int n;
	cin >> n;
	while (n--) {
		char cmd;
		cin >> cmd;
		if (cmd == 'L' && !left.empty()) {
			right.push(left.top());
			left.pop();
		}
		else if (cmd == 'D' && !right.empty()) {
			left.push(right.top());
			right.pop();
		}
		else if (cmd == 'B' && !left.empty()) {
			left.pop();
		}
		else if(cmd == 'P'){
			char c;
			cin >> c;
			left.push(c);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}

	while (!right.empty()){
		cout << right.top();
		right.pop();
	}
	return 0;
}