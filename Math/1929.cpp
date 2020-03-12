#include <iostream>
using namespace std;
#define MAX 100000

int main() {
	int arr[MAX] = {0}; // 0���� �ʱ�ȭ
	bool check[MAX + 1] = {0};

	int a, b;
	cin >> a >> b;
	int pnum = 0;
	for (int i = a; i < b; i++) {
		if (check[i] == false)
			arr[pnum++] = i;
		for (int j = i * i; j <= b; j += i) {
			check[j] = true;
		}
	}

	for (int i = a; i < b; i++) {
		if (check[i]) {
			cout << arr[i-1] << "\n";
		}
	}
	return 0;
}