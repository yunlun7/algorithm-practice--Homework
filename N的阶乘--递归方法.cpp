#include<iostream>
using namespace std;
int N(int n)
{
	if (n == 1)
		return 1;
	else
		return N(n - 1) + n;
}
int main()
{
	int n;
	cout << "����������Ľײ���n��" << endl;
	cin >> n;
	cout << N(n);
	return 0;
}
