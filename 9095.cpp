#include<iostream>
using namespace std;

int main()
{
    int dp[11];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for(int i = 4; i<11; i++)
    {
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    
    int T,n;
    cin >> T;
    int* test = new int[T];
    for(int i =0; i<T; i++)
    {
        cin >> n;
        test[i] = dp[n];
    }
    
    for(int i = 0; i<T; i++)
    {
        cout << test[i] << endl;
    }
    return 0;
}