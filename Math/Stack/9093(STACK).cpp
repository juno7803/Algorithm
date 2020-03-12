// 9093-�ܾ� ������
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc;
	cin >> tc;
	cin.ignore();
	// �Ʒ��� getline �ڵ忡�� �Է¹��ۿ� �����ϴ� tc'\' ���� �����ϱ����ؼ� cin.ignore�� �ٷ� ���ش�.
	//http://blog.naver.com/PostView.nhn?blogId=lyw94k&logNo=220859905348&parentCategoryNo=&categoryNo=11&viewDate=&isShowPopularPosts=true&from=search

	while (tc--) { // until tc comes '0'
		string str;
		getline(cin, str); // getline���� ���� �о��
		str += '\n'; // getline�� ������ �������� �����Ƿ�, ��������� ������ ���� ���൵ ���Խ�Ŵ
		stack<char> s;
		for (char ch : str) {
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ch; // ������⳪ ���൵ �������� �ϹǷ�
			}
			else {
				s.push(ch); // ������⳪ ���� ������ ������ ���ÿ� �߰�
			}
		}
	}

	return 0;
}