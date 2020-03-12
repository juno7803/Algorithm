#include <iostream>
#include <algorithm>
using namespace std;
int A[1000];
int D[1000];
int V[1000];

void go(int pos) {
    if (pos == -1) {
        return ;
    }// 탈출조건
    go(V[pos]); // V배열은 어디를 계승했는지 인덱스를 표시하는 배열
    cout << A[pos] << ' ';
}
// boj에선 여기 void로 안바꾸면 런타임 에러남
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        D[i] = 1;
        V[i] = -1;
    }
    // pdf 파일엔 index인 i가 1부터 시작하는데, 여기는 0부터 시작하게 구현했으므로
    // 탈출조건을 -1로 두기 위해 초기값을 -1로 설정

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