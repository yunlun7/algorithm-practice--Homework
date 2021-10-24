#include <iostream>
#include <math.h>
using namespace std;


/*�鲢����Ĺ��̣�
1.�����ݽ��в��ϵطֽ⣬ֱ�����鳤��Ϊ1�����ζ����ݽ���ǰ����������Ȼ����кϲ��Ĺ���
2.���õݹ�ķ���˼��
*/


bool merge(int array[], size_t arrStart, size_t arrMiddle, size_t arrEnd) {
    int arrLen = arrEnd - arrStart;
    if (arrLen < 2) {
        cout << "Please check your implementation." << endl;
        return false;
    }

    int* temp = new int(arrLen);
    int i = arrStart;
    int j = arrMiddle;
    int tempIndex = 0;//��ʱ�����±�

    /*������-�м�ֵ���������򣬲����ź��������װ����ʱ����*/
    while (i < arrMiddle && j < arrEnd) {
        //����ǰ�ߴ����м�ֵ���򽫶�Ӧ��arrMiddleֵ��ֵ����ʱ������
        if (array[i] > array[j]) {
            temp[tempIndex] = array[j];
            ++j;
        }
        //����arrMiddleֵ��ֵ����ʱ����
        else {
            temp[tempIndex] = array[i];
            ++i;
        }
        ++tempIndex;
    }

    
    while (i < arrMiddle) {
        temp[tempIndex++] = array[i++];
    }

    /*�����м�ֵ-β���������򣬲���������õ�����װ����ʱ������*/
    while (j < arrEnd) {
        temp[tempIndex++] = array[j++];
    }

    //����ʱ�����е��������ηŻ�ԭ������
    for ((tempIndex = 0, i = arrStart); (tempIndex < arrLen && i < arrEnd); (++tempIndex, ++i)) {
        array[i] = temp[tempIndex];
    }

    delete[]temp;
    temp = NULL;

    return true;
}


bool mergeSort(int array[], size_t arrStart, size_t arrEnd) {
    int arrLen = arrEnd - arrStart;//�����鳤��
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }

    if (arrLen == 0 || arrLen == 1) {
        return true;
    }

    int middle = arrStart + floor(arrLen / 2);//��������м�ֵ

    mergeSort(array, arrStart, middle);//����-�м�ֵ���в��ϵĲ��
    mergeSort(array, middle, arrEnd);//���м�ֵ-β���в��ϵĲ��
    return merge(array, arrStart, middle, arrEnd);//�ϲ�
}
//��ӡ����
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
    mergeSort(array0, 0, arrayLen);
    printArray(array0, arrayLen);

    cout << "=========================================" << endl;

    int array1[] = { 1 };
    arrayLen = sizeof(array1) / sizeof(int);

    printArray(array1, arrayLen);
    mergeSort(array1, 0, arrayLen);
    printArray(array1, arrayLen);

    cout << "=========================================" << endl;

    int array2[] = { 2, 1 };
    arrayLen = sizeof(array2) / sizeof(int);

    printArray(array2, arrayLen);
    mergeSort(array2, 0, arrayLen);
    printArray(array2, arrayLen);

    cout << "=========================================" << endl;

    int array3[] = { 1, 5, 3 };
    arrayLen = sizeof(array3) / sizeof(int);

    printArray(array3, arrayLen);
    mergeSort(array3, 0, arrayLen);
    printArray(array3, arrayLen);


    cout << "=========================================" << endl;

    int array4[] = { 9, 12, 8, 7 };
    arrayLen = sizeof(array4) / sizeof(int);

    printArray(array4, arrayLen);
    mergeSort(array4, 0, arrayLen);
    printArray(array4, arrayLen);

    cout << "=========================================" << endl;

    int array5[] = { 9, 12, 8, 7, 3 };
    arrayLen = sizeof(array5) / sizeof(int);

    printArray(array5, arrayLen);
    mergeSort(array5, 0, arrayLen);
    printArray(array5, arrayLen);


}