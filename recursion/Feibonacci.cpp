#include<iostream>
using namespace std;
int Recursive_Feibolacci(int n)
{
	if (n == 0)//�ж��������n�Ƿ�Υ��
		return 0;
	else if (n == 1)//�����������nΪ1��������1
		return 1;
	else//���򣬽���ѭ���ݹ�
		return Recursive_Feibolacci(n - 1) + Recursive_Feibolacci(n - 2);

}
/*����ʱ�临�Ӷ�Ϊ��O(n)*/
int NotRecursive_Feibolacci(int n)
{
	if (n < 1)//�����������nΥ�����򷵻�0
		return 0;
	else//���򣬽������ζ�����м���
	{
		int first = 1;//�����һλ��Ϊ1
		int end = 1;//����ڶ�λ��Ϊ2
		int temp = first;//����temp����ǰ����λ����ӵĽ��
		while (n > 2)//ͨ��whileѭ�����м���ÿһλ���Ľ��
		{
			temp = first + end;
			first = end;
			end = temp;
			--n;
		}
		return temp;//����temp
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