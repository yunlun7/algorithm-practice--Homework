#include<iostream>
using namespace std;
int f(int n)
{
	if (n == 0)
		return 0;
	else if (n <= 2)
		return 1;
	int first = 0;
	int end = 1;
	while (0 <= n--)
	{
		end += first;
		first = end - first;
	}
	return first + end;

}
int main()
{
	int n;
	cout << "��������Ҫ�����쳲��������еĸ���n" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << f(i) << " ";
	}
}

