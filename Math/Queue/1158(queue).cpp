// 1158-�似�۽� ����
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	queue<int> q;
	// test-case ��� �ƴ�
	// �Է� case�� ���� ���� ���
	cin >> n >> k;
	int x = 1;
	while (n+1>x) {
		q.push(x++);
		// �ʱ�ȭ
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
				q.pop(); // k��° �� ����
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
	// ������ ���Ҵ� > �����ؼ� ����ؾ� �ϹǷ� ���� ��
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