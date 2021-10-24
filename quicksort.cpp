#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;


/*��������Ĺ��̣�
1.���ѡȡһ������Ϊ�м�ֵ���������в��ұ������С�ķ�����ߣ�������ķ����ұ�
2.Ȼ�󲻶ϵز������ַ�����ʹ�÷���˼�룬�ݹ�ʵ�ֶ�ʣ�µ�������л��ֱȽϣ�ֱ����������Ϊ1
3.�޿����������������Ϊ��������

*/


int partition(int array[], size_t arrStart, size_t pivot, size_t arrEnd) {
    int arrayLen = arrEnd - arrStart;//�������鳤��

    if (arrayLen < 1 || pivot < arrStart || pivot >= arrEnd) {
        cout << "Please check your implementation." << endl;
        return -1;
    }//�������鳤��Υ�����򷵻�false

    int pivotValue = array[pivot];//�м�ֵ
    array[pivot] = array[arrEnd - 1];//��ʼ��Ϊ���һ����ֵ
    int pivotPos = arrStart;
    int temp;//���ڽ�����ֵ

    for (int i = arrStart; i < arrEnd - 1; ++i)
    {
        if (array[i] < pivotValue) {
            temp = array[pivotPos];
            array[pivotPos] = array[i];
            array[i] = temp;
            ++pivotPos;
        }//����ǰ�ߴ����м�ֵ������н���
    }
    array[arrEnd - 1] = array[pivotPos];
    array[pivotPos] = pivotValue;

    return pivotPos;
}



bool quickSort(int array[], size_t arrStart, size_t arrEnd) {
    int arrLen = arrEnd - arrStart;//�������鳤��
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }

    if (arrLen == 0 || arrLen == 1) {
        return true;
    }

    srand(array[array[arrStart] + arrLen + array[arrEnd - 1]]);//���ѡȡһ������Ϊ�м�ֵ

    int pivot = arrStart + floor(((arrLen - 1) + (size_t)rand()) % (arrLen - 1));

    int pivotPos = partition(array, arrStart, pivot, arrEnd);

    quickSort(array, arrStart, pivotPos);//ɨ��pivotpos��ߵ�����
    quickSort(array, pivotPos + 1, arrEnd);//ɨ��pivotpos�ұߵ�����

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
    quickSort(array0, 0, arrayLen);
    printArray(array0, arrayLen);

    cout << "=========================================" << endl;

    int array1[] = { 1 };
    arrayLen = sizeof(array1) / sizeof(int);

    printArray(array1, arrayLen);
    quickSort(array1, 0, arrayLen);
    printArray(array1, arrayLen);

    cout << "=========================================" << endl;

    int array2[] = { 2, 1 };
    arrayLen = sizeof(array2) / sizeof(int);

    printArray(array2, arrayLen);
    quickSort(array2, 0, arrayLen);
    printArray(array2, arrayLen);

    cout << "=========================================" << endl;

    int array3[] = { 1, 5, 3 };
    arrayLen = sizeof(array3) / sizeof(int);

    printArray(array3, arrayLen);
    quickSort(array3, 0, arrayLen);
    printArray(array3, arrayLen);


    cout << "=========================================" << endl;

    int array4[] = { 9, 12, 8, 7 };
    arrayLen = sizeof(array4) / sizeof(int);

    printArray(array4, arrayLen);
    quickSort(array4, 0, arrayLen);
    printArray(array4, arrayLen);

    cout << "=========================================" << endl;

    int array5[] = { 9, 12, 8, 7, 3 };
    arrayLen = sizeof(array5) / sizeof(int);

    printArray(array5, arrayLen);
    quickSort(array5, 0, arrayLen);
    printArray(array5, arrayLen);


}