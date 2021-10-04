#include<iostream>
using namespace std;
int f(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return f(n - 1) + f(n - 2);
}
int main()
{
	int n;
	cout << "请输入台阶个数n：" << endl;
	cin >> n;
	cout << f(n);
	return 0;
}