// 1158-요세퍼스 문제
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	queue<int> q;
	// test-case 경우 아님
	// 입력 case가 많지 않은 경우
	cin >> n >> k;
	int x = 1;
	while (n+1>x) {
		q.push(x++);
		// 초기화
	}
	
	cout << "<";
	while (!q.empty()) {
		for (int i = 0; i < k; i++) {
			if (i+1 != k) {
				q.push(q.front());
				q.pop();
			}
			else {
				if (q.front() == q.back()) {
					cout << q.front() << ">";
					return 0;
				}
				cout << q.front()<< ", ";
				q.pop(); // k번째 수 삭제
			}
		}
	}
	return 0;
}

//	BOJ sol)
int main() {
	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << "<";
	for (int i = 0; i < n - 1; i++) {
	// 마지막 원소는 > 포함해서 출력해야 하므로 따로 뺌
		for (int j = 0; j < k - 1; j++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">";
	return 0;
}