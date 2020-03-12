#include<iostream>
#include<string>
using namespace std;
struct Queue {
	int data[10000];
	int begin, end;
	Queue() {
		begin = 0;
		end = 0;
	}

	void push(int x) {
		data[end] = x;
		end += 1;
	}
	bool empty() {
		if (begin == end)
			return true;
		else
			return false;
	}
	int pop() {
		if (empty())
			return -1;
		else {
			begin += 1;
			return data[begin - 1];
			// 데이터의 온전한 삭제가 아니라 begin을 옮겨주기만 한다!
		}
	}
	int size() {
		return (end - begin);
	}
	int front() {
		return data[begin];
	}
	int back() {
		return data[end - 1];
	}
};

int main() {
	int n;
	cin >> n;
	Queue q;
	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << q.empty() << '\n';
		}
		else if (cmd == "front") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (cmd == "back") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
	return 0;
}