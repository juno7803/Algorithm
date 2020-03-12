#include <iostream>
using namespace std;

int main()
{
	int temp,j;
	int Arr[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < 9; i++) {
		j = i;
		while (j>=0 && Arr[j] >Arr[j+1]) // 계속 인접한 원소끼리 비교는 하지만,swap은 경우를 만족할 경우만 한다!(가장 효율적인 이유)
		{
			temp = Arr[j];
			Arr[j] = Arr[j + 1];
			Arr[j + 1] = temp;
			j--;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << Arr[i] << " ";
	}
	return 0;
}