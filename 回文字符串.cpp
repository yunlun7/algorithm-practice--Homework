#include <iostream>
using namespace std;
#define MAX 100
int main()
{
	char str[MAX];
	while (1)
	{
		cout << "请输入一串字符串：" << endl;
		cin >> str;
		int length = strlen(str);
		int first = 0;
		int end = length - 1;
		int a = 1;//通过a的值来判断是否是回文字符串
		for (first = 0, end = length - 1; first <= length / 2; first++, end--)
		{
			if (str[first] == str[end])
			{
				a = 0;
			}
			else
			{
				a = 1;
				break;
			}
				
		}
		if (a == 0)
			cout << "Yes!!!!" << endl; //如果是回文字符串，输出Yes
		else
			cout << "No～～～" << endl; //如果不是回文字符串，输出No
		cout << "====================================================" << endl;
		cout << endl;
	}
}

