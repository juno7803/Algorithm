// 9093-단어 뒤집기
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
	// 아래의 getline 코드에서 입력버퍼에 존재하는 tc'\' 값을 무시하기위해서 cin.ignore을 바로 해준다.
	//http://blog.naver.com/PostView.nhn?blogId=lyw94k&logNo=220859905348&parentCategoryNo=&categoryNo=11&viewDate=&isShowPopularPosts=true&from=search

	while (tc--) { // until tc comes '0'
		string str;
		getline(cin, str); // getline으로 한줄 읽어옴
		str += '\n'; // getline은 개행을 포함하지 않으므로, 다음문장과 구분을 위해 개행도 포함시킴
		stack<char> s;
		for (char ch : str) {
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ch; // 띄워쓰기나 개행도 출력해줘야 하므로
			}
			else {
				s.push(ch); // 띄워쓰기나 개행 만나기 전까진 스택에 추가
			}
		}
	}

	return 0;
}