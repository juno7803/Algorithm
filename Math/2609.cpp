#include<iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
	int a, b;
	cin >> a >> b;
	
	//�ִ����� GCD
	cout << gcd(a, b) << "\n";

	// �ּҰ���� LCM
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
//} // ��� ����

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}// �ݺ��� ����

/*
	a%b=r �̶�� �� ��
	GCD(a,b) = GCD(b,r) ���� �̿��ؼ� ���� 
*/


int lcm(int a, int b) {
	return (a * b / gcd(a, b));
}