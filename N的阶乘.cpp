#include<iostream>
using namespace std;
int N(int n)
{
	int N1 = 1;
	int A = 0;
	if (n == 1)
		return N1;
	else
		for (int i = 2; i <= n; i++)
		{
			A = N1 + i;
			N1 = A;
		}
	return A;
}
int main()
{
	int n;
	cout << "����������Ľײ���n��" << endl;
	cin >> n;
	cout << N(n);
	return 0;
}
