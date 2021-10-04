#include<iostream>
using namespace std;
int huiwen(char* str, int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		if (str[0] == str[n - 1])
		{
			++str;
			n -= 2;
			return huiwen(str, n);
		}
		else
			return 0;
	}
}
int main()
{
	char a[100];
	while (1)
	{
		cout << "请输入一段字符串：" << endl;
		cin >> a;
		int length = strlen(a);
		if (huiwen(a, length) == 1)
		{
			cout << a << "是回文字符串！" << endl;
		}
		else
			cout << a << "不是回文字符串～" << endl;
	}
	return 0;
}