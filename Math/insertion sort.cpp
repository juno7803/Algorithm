#include <iostream>
using namespace std;

int main()
{
	int temp,j;
	int Arr[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < 9; i++) {
		j = i;
		while (j>=0 && Arr[j] >Arr[j+1]) // ��� ������ ���ҳ��� �񱳴� ������,swap�� ��츦 ������ ��츸 �Ѵ�!(���� ȿ������ ����)
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