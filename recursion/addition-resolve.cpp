#include <iostream>
using namespace std;

void print(int number, int* FJ, int a) {
    int i = 0;
    for (; i < a - 1; i++) {
        cout << FJ[i] << " ";
    }
    cout << FJ[i] << endl;
}
void fenjieR(int number, int Nn, int* FJ, int a) {/*��ͬ����ļӷ��ֽ�*/
    if (Nn == 0) {
        print(number, FJ, a);
    }
    else {
        for (int i = 1; i <= Nn; i++)
        {
            FJ[a] = i;
            fenjieR(number, Nn - i, FJ, a + 1);
        }
    }
}
void fenjie(int number, int Nn, int* FJ, int a) {
    if (Nn == 0) {
        print(number, FJ, a);
    }
    else {
        int startIndex = a > 0 ? FJ[a - 1] : 1;
        for (int i = startIndex; i <= Nn; i++)
        {
            FJ[a] = i;
            fenjie(number, Nn - i, FJ, a + 1);
        }
    }
}
int main()
{
    int m;//����һ��Ҫ�ֽ������������������������ж���Ҫ����������
    cout << "������ֽⷽʽ:  1.�ظ�����  or  2.���ظ�����" << endl;
    cin >> m;
    int number = 5; //�ֽ����
    int* FJ = new int[5];   //���ֽ����������װ��һ��������
    cout << "�ֽ�����" << endl;
    if (m == 1)
        fenjieR(number, 5, FJ, 0);
    else if (m == 2)
        fenjie(number, 5, FJ, 0);
    delete[]FJ;
    return 0;
}