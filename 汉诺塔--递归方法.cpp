#include<iostream>
using namespace std;
int i;
void move(int n, char from, char to)
{
	cout << "第" << ++i << "步：" << "第" << n << "个盘子" << "从" << from << "->" << to << endl;
}
void hannota(int n, char A, char B, char C)
{
	if (n == 0)
		return;
	hannota(n - 1, A, C, B);
	move(n, A, B);
	hannota(n - 1, C, B, A);
}
int main()
{
	int n;
	cout << "请输入盘子个数n：" << endl;
	cin >> n;
	hannota(n, 'A', 'C', 'B');
	return 0;
}