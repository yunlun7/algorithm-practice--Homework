#include<iostream>
using namespace std;
int Recursive(int n)
{
	if (n == 1)
		return 1;
	else
		return Recursive(n - 1) * n;
}
/*递推复杂度分析：
	  时间复杂度为O(n),由for循环可知，执行n-2次，即复杂度取n，为O(n)
*/
int NotRecursive(int n)
{
	int N1 = 1;
	int A = 0;
	if (n == 1)
		return N1;
	else
		for (int i = 2; i <= n; i++)
		{
			A = N1 * i;
			N1 = A;
		}
	return A;
}
int main()
{
	cout << "==========================Recursive: " ;
	cout << Recursive(5) << endl;
	cout << "==========================NotRecursive: ";
	cout << NotRecursive(5) << endl;
	return 0;
}