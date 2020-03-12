#include <iostream>
#include <algorithm>
using namespace std;
int A[1000];
int D[1000];
int V[1000];

void go(int pos) {
    if (pos == -1) {
        return ;
    }// Ż������
    go(V[pos]); // V�迭�� ��� ����ߴ��� �ε����� ǥ���ϴ� �迭
    cout << A[pos] << ' ';
}
// boj���� ���� void�� �ȹٲٸ� ��Ÿ�� ������
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        D[i] = 1;
        V[i] = -1;
    }
    // pdf ���Ͽ� index�� i�� 1���� �����ϴµ�, ����� 0���� �����ϰ� ���������Ƿ�
    // Ż�������� -1�� �α� ���� �ʱⰪ�� -1�� ����

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j] && (D[j] + 1) > D[i]) {
                D[i] = D[j] + 1;
                V[i] = j;
            }
        }
    }

    int pos = 0;
    int ans = D[0];
    for (int i = 0; i < n; i++) {
        if (ans < D[i]) {
            ans = D[i];
            pos = i;
        }
    }
    cout << ans << '\n';
    go(pos);
    
    return 0;
}