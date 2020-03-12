#include <iostream>
#include <stack>
#include <string>
using namespace std;

void print(stack<char> &ref); // main �ܺο��� ���ǵ� �Լ��� stack�� ������ �ϹǷ� reference�� �־�� ��

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<char> s;
	
	string str;
	getline(cin, str);
	bool tag = false;
	for (char ch : str) {
		if (ch == '<') {
			print(s);
			tag = true;
			cout << ch;
		} // ��ȣ ���� �� ����� ���
		else if (ch == '>') {
			tag = false;
			cout << ch;
		} // > ��ȣ ���� �� �±��̹Ƿ� �״�� ���
		else if (tag){
			cout << ch;
		} // tag�� true�� ���� <�� ���� ���, �� �̺κ��� < > ������ �ȴ�!(��� �״�� ����ؾ���)
		else {
			if (ch == ' ') {
				print(s);
				cout << ch;
			}else {
				s.push(ch);
			}
		}
	}
	print(s);
	cout << '\n';
	return 0;
}

void print(stack<char> &ref)
{
	while (!ref.empty()) {
		cout << ref.top();
		ref.pop();
	}
} // �Ű����� ref�� ���ڷ� ������ 's'�� ������ �����Ǿ� �Լ��� 'ref'�� ���� 's'�� ���� ������ �� �ְ� �Ѵ�!

/*
	����Ÿ��
	1.�Ϲ� ����(normal variable): ���� ���� ����.
	2.������(pointer): �ٸ� ���� �ּ�(�Ǵ� null)�� ����.
	3.������ ����(reference): 
	��ó: https://boycoding.tistory.com/207 [�ҳ��ڵ�]
*/