//2진수 8진수
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	if (n % 3 == 1) {
		cout << s[0];
	}
	else if (n % 3 == 2) {
		cout << (s[0] - '0') * 2 + (s[1] - '0');
	}
	for (int i = n % 3; i < n; i += 3) {
		cout << (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0');
	}
	cout << '\n';
	// for문 증감식 부분: +=3 은 i를 3씩 증가시키겠다는 뜻 i=i+3
	return 0;
}