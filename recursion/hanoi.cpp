#include<iostream>
using namespace std;
int i;
void move(int n, char from, char to)
{
	cout << "��" << ++i << "����" << "��" << n << "������" << "��" << from << "->" << to << endl;
}
void hannota(int n, char A, char B, char C)
{
	if (n == 0)
		return;
	hannota(n - 1, A, C, B);
	move(n, A, C);
	hannota(n - 1, B, A, C);
}
int main()
{
	hannota(3, 'A', 'B', 'C');
	return 0;
}