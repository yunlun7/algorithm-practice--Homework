#include<iostream>
using namespace std;
int Recursive_huiwen(char* str, int n)
{
	int w = 0;
	if (n <= 0)
	{
		w = 1;
		return w;

	}
	else 
	{
		if (n == 1)
		{
			return w;
		}
		else if (str[0] == str[n - 1])
		{
			return Recursive_huiwen(str + 1, n - 2);
		
		}
		else
		{
			w = 1;
			return w;
		}
		//return Recursive_huiwen(str + 1, n - 2);

	}

}

/*递推时间复杂度分析：由for循环可知，共循环n/2次，则时间复杂度为O(n)*/
int NotRecursive(char q[], int n)
{
	int first = 0;
	int end = n - 1;
	int a = 1;//通过a的值来判断是否是回文字符串
	for (first = 0, end = n - 1; first <= n / 2; first++, end--)
	{
		if (q[first] == q[end])
		{
			a = 0;
		}
		else
		{
			a = 1;
			break;
		}

	}
	return a;
}
void Output(char a[],int n)
{
	cout << "----";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] ;
	}

}
int main()
{
	cout << "==============================Recursive_huiwen: " << endl;
	char a[3] = {'a','b','a'};
	if (Recursive_huiwen(a, 3) == 1)
	{
		Output(a, 3);
		cout << " is No!" << endl;
	}
	else
	{
		Output(a, 3);
		cout  << " is Yes!" << endl;
	}
	char c[8] = { 'a','b','c','d','e','r','a','a'};
	if (Recursive_huiwen(c, 8) == 1)
	{
		Output(c, 8);
		cout  << " is No!" << endl;
	}
	else
	{
		Output(c, 8);
		cout  << " is Yes!" << endl;
	}
	char b[5] = { 'a','b','c','b','a' };
	if (Recursive_huiwen(b, 5) == 1)
	{
		Output(b, 5);
		cout << " is No!" << endl;
	}
	else
	{
		Output(b, 5);
		cout << " is Yes!" << endl;
	}
	cout << endl;
	cout << endl;
	cout << "==============================NotRecursive: " << endl;
	char d[3] = { 'a','a','a' };
	if (Recursive_huiwen(d, 3) == 1)
	{
		Output(d, 3);
		cout << " is No!" << endl;
	}
	else
	{
		Output(d, 3);
		cout << " is Yes!" << endl;
	}
	char e[4] = { 'a','a','a','c'};
	if (Recursive_huiwen(e, 4) == 1)
	{
		Output(e, 4);
		cout << " is No!" << endl;
	}
	else
	{
		Output(e, 4);
		cout << " is Yes!" << endl;
	}
	char f[5] = { 'a','c','a','d','a'};
	if (Recursive_huiwen(f, 5) == 1)
	{
		Output(f, 5);
		cout << " is No!" << endl;
	}
	else
	{
		Output(f, 5);
		cout << " is Yes!" << endl;
	}
	return 0;
}