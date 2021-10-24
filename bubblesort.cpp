#include <iostream>
#include <math.h>
using namespace std;

/*ð������Ĺ���
1.�Ƚ��������ڵ�Ԫ�أ���ǰ�߱Ⱥ��ߴ��򽻻���
2.��ÿ���ڵ���Ԫ�ؽ��бȽϣ�ͨ����������Ԫ�ؾͻ���������
3.�ظ��˲��裬ֱ��û��Ԫ�ؿɱȽ�Ϊֹ

*/
bool bubbleSort(int array[], size_t arrLen) {
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }//�������鳤��Υ�����򷵻�false

    
    for (int orderedNum = 0; orderedNum < arrLen; ++orderedNum) {
        bool isExchanged = false;//�ʼ��û���н�����ֵisExchangeΪfalse
        for (int i = 0; i < arrLen - orderedNum - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isExchanged = true;//����ǰ��������ں����������н���������isExchange��ֵΪtrue
            }
        }
        if (!isExchanged) {
            break;//���δ���н���������ѭ��
        }
    }
    return true;
}

//���Ż��Ľ������
bool bubbleSort_Sheng(int array[], size_t arrLen) {
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }
    int orderedNum = 0;//��ʼ����������
    while (true) {
        bool isExchanged = false;
        //ѭ��iΪÿ������Ĵ���
        for (int i = 0; i < arrLen - orderedNum - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isExchanged = true;//��ǰ�߱Ⱥ��ߴ��򽻻�������isExchangeΪtrue
            }
        }

        if (!isExchanged) {
            break;
        }

        ++orderedNum;
    }
    return true;
}
//�������
void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array0[] = {};
    int arrayLen = sizeof(array0) / sizeof(int);

    printArray(array0, arrayLen);
    bubbleSort(array0, arrayLen);
    printArray(array0, arrayLen);

    cout << "=========================================" << endl;

    int array1[] = { 1 };
    arrayLen = sizeof(array1) / sizeof(int);

    printArray(array1, arrayLen);
    bubbleSort_Sheng(array1, arrayLen);
    printArray(array1, arrayLen);

    cout << "=========================================" << endl;

    int array2[] = { 2, 1 };
    arrayLen = sizeof(array2) / sizeof(int);

    printArray(array2, arrayLen);
    bubbleSort(array2, arrayLen);
    printArray(array2, arrayLen);

    cout << "=========================================" << endl;

    int array3[] = { 1, 5, 3 };
    arrayLen = sizeof(array3) / sizeof(int);

    printArray(array3, arrayLen);
    bubbleSort_Sheng(array3, arrayLen);
    printArray(array3, arrayLen);


    cout << "=========================================" << endl;

    int array4[] = { 9, 12, 8, 7 };
    arrayLen = sizeof(array4) / sizeof(int);

    printArray(array4, arrayLen);
    bubbleSort(array4, arrayLen);
    printArray(array4, arrayLen);

    cout << "=========================================" << endl;

    int array5[] = { 9, 12, 8, 7, 3 };
    arrayLen = sizeof(array5) / sizeof(int);

    printArray(array5, arrayLen);
    bubbleSort_Sheng(array5, arrayLen);
    printArray(array5, arrayLen);


}