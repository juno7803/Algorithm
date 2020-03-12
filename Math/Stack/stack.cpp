// 10828-Ω∫≈√
#include <iostream>
using namespace std;
struct STACK
{
	int data[10000];
	int size;
	STACK() {
		size = 0;
	}
	void push(int x) {
		data[size] = x;
		size += 1;
	}
	bool empty() {
		if (size == 0)
			return true;
		else return false;
	}
	int pop() {
		if (empty())
			return -1;
		else 
			size -= 1;
	}
	int top() {
		if (empty())
			return -1;
		return data[size - 1];
	}


};
int main() {
	int n;
	cin >> n;
	STACK s;
	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmd == "pop") {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (cmd == "size") {
			cout << s.size << '\n';
		}
		else if (cmd == "empty") {
			cout << s.empty() << '\n';
		}
		else if (cmd == "top") {
			if (s.empty())
				cout << -1 << '\n';
			else
				cout << s.top() << '\n';
		}
	}
}