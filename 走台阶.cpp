#include<iostream>
using namespace std;
int f(int n)
{
	int f1 = 1;
	int f2 = 2;
	int F;
	if (n = 1)
		return f1;
	else if (n == 2)
		return f2;
	else
		for (int i = 3; i <= n; i++)
		{
			F = f1 + f2;
			f2 = f1;
			f1 = F;
		}
	return F;

}
int main()
{
	int n;
	cout << "ÇëÊäÈëÌ¨½×¸öÊýn£º" << endl;
	cin >> n;
	cout << f(n);
	return 0;
}
