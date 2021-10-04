#include<iostream>
using namespace std;
int f(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return f(n - 1) + f(n - 2);

}
int main()
{
	int n;
	cout << "请输入想要输出的斐波拉契数列的个数n" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << f(i) << " ";
	}
}