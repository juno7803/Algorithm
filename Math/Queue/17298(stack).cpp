// 오큰수-17298
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
//	// O(N*N) 이 되면 시간초과됨.. 100억정도이므로..
//	// 풀이에선 O(N)이 되도록 stack을 사용함
//	return 0;
//}