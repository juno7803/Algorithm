// ��ū��-17298
#include <iostream>
#include <stack>
using namespace std;

int main() 
{

	return 0;
}

//#include<iostream>
//#include<queue>
//using namespace std;
//int A[1000000];
//
//int main()
//{	
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> A[i];
//	}
//
//	for (int i = 0; i < n; i++) {
//		queue<int> q;
//		for (int j = i+1; j < n; j++) {
//			if (A[j] > A[i]) {
//				q.push(A[j]);
//			}
//		}
//		if (!q.empty()) {
//			cout << q.front() << " ";
//		}
//		else {
//			cout << -1 << " ";
//		}
//	}
//	// O(N*N) �� �Ǹ� �ð��ʰ���.. 100�������̹Ƿ�..
//	// Ǯ�̿��� O(N)�� �ǵ��� stack�� �����
//	return 0;
//}