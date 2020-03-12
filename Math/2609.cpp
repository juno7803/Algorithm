#include<iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
	int a, b;
	cin >> a >> b;
	
	//최대공약수 GCD
	cout << gcd(a, b) << "\n";

	// 최소공배수 LCM
	cout << lcm(a, b);
	return 0;
}

//int gcd(int a, int b) {
//	if (b == 0) {
//		return a;
//	}
//	else{
//		return gcd(b, a % b);
//	}
//} // 재귀 구현

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}// 반복문 구현

/*
	a%b=r 이라고 할 때
	GCD(a,b) = GCD(b,r) 임을 이용해서 구현 
*/


int lcm(int a, int b) {
	return (a * b / gcd(a, b));
}