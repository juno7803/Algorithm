//2���� 8����
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
	// for�� ������ �κ�: +=3 �� i�� 3�� ������Ű�ڴٴ� �� i=i+3
	return 0;
}