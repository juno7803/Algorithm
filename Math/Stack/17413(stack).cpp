#include <iostream>
#include <stack>
#include <string>
using namespace std;

void print(stack<char> &ref); // main 외부에서 정의된 함수가 stack을 지워야 하므로 reference로 넣어야 함

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
		} // 괄호 앞은 다 뒤집어서 출력
		else if (ch == '>') {
			tag = false;
			cout << ch;
		} // > 괄호 앞은 다 태그이므로 그대로 출력
		else if (tag){
			cout << ch;
		} // tag가 true인 경우는 <를 만난 경우, 즉 이부분은 < > 안쪽이 된다!(모두 그대로 출력해야함)
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
} // 매개변수 ref가 인자로 들어오는 's'에 참조로 설정되어 함수가 'ref'를 통해 's'의 값을 변경할 수 있게 한다!

/*
	변수타입
	1.일반 변수(normal variable): 직접 값을 보유.
	2.포인터(pointer): 다른 값의 주소(또는 null)를 보유.
	3.참조형 변수(reference): 
	출처: https://boycoding.tistory.com/207 [소년코딩]
*/