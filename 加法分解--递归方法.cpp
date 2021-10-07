#include <iostream>
using namespace std;

void print(int number, int* FJ, int a) {
    int i = 0;
    for (; i < a - 1; i++) {
        cout << FJ[i] << " ";
    }
    cout << FJ[i] << endl;
}

void fenjieR(int number, int Nn, int* FJ, int a) {/*相同情况的加法分解*/
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
    int n, m;//定义一个要分解的数，和输入的数字来进行判断需要哪种输出结果
    cout << "请输入要分解的数:" << endl;
    cin >> n;
    cout << "请输入分解方式:  1.重复计算  or  2.不重复计算" << endl;
    cin >> m;
    int number = n; //分解的数
    int* FJ = new int[n];   //将分解出来的数字装进一个数组中
    cout << "分解结果：" << endl;
    if (m == 1)
        fenjieR(number, n, FJ, 0);
    else if (m == 2)
        fenjie(number, n, FJ, 0);
    delete[]FJ;
    return 0;
}