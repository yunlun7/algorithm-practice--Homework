#include<iostream>
using namespace std;
int Recursive(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return Recursive(n - 1) + Recursive(n - 2);
}
int Notrecursive(int n)
{
	int f1 = 1;
	int f2 = 2;
	int F;
	if (n == 1)
		return f1;
	else if (n == 2)
		return f2;
	else
		for (int i = 3; i <= n; i++)
		{
			F = f1 + f2;
			f1 = f2;
			f2 = F;
		}
	return F;
}
int main()
{
	int n =10;
	cout << "==================" << endl;
	cout << "Recrusive £º";
	cout << Recursive(n)<<endl;
	cout << "==================" << endl;
	cout << "Notrecrusive £º";
	cout << Notrecursive(n);
	return 0;
}