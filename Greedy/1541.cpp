#include <iostream>
#include <string>
using namespace std;
string str;

int minResult()
{
	int result = 0;
	string temp = "";
	bool minus = false;
	for (int i = 0; i <= str.size(); i++)
	{
		//연산자일 경우

		if (str[i] == '+' || str[i] == '-' || str[i] == '\0')
		{
			if (minus) // -가 나타날때마다 계속 -해줌
				result -= stoi(temp);
			else
				result += stoi(temp);
			temp = ""; //초기화
			//괄호를 뺄셈 이후에 치면 최소

			if (str[i] == '-')
				minus = true;
			continue;
		}
		//피연산자일 경우
		temp += str[i];
	}
	return result;
}

int main(){
	cin >> str;
	cout << minResult() << '\n';
	return 0;
}