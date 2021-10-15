#include<iostream>
using namespace std;
int Recursive_Feibolacci(int n)
{
	if (n == 0)//判断所输入的n是否违法
		return 0;
	else if (n == 1)//假如所输入的n为1，即返回1
		return 1;
	else//否则，进行循环递归
		return Recursive_Feibolacci(n - 1) + Recursive_Feibolacci(n - 2);

}
/*递推时间复杂度为：O(n)*/
int NotRecursive_Feibolacci(int n)
{
	if (n < 1)//假如所输入的n违法，则返回0
		return 0;
	else//否则，进行依次对其进行计算
	{
		int first = 1;//定义第一位数为1
		int end = 1;//定义第二位数为2
		int temp = first;//定义temp接收前面两位数相加的结果
		while (n > 2)//通过while循环进行计算每一位数的结果
		{
			temp = first + end;
			first = end;
			end = temp;
			--n;
		}
		return temp;//返回temp
	}

}
int main()
{
	cout << "Recursive_Feibolacci: " ;
	for (int i = 1; i <= 8; i++)
	{
		cout << Recursive_Feibolacci(i) << " ";
	}
	cout << endl;
	cout << "==========================" << endl;
	cout << "NotRecursive_Feibolacci: ";
	for (int i = 1; i <= 8; i++)
	{
		cout << NotRecursive_Feibolacci(i) << " ";
	}
}