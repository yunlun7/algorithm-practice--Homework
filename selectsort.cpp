//#include <iostream>
//#include <math.h>
//using namespace std;
//
//
///*ѡ������Ĺ��̣�
//1.ѡ����������С�����͵�һ�������н���
//2.��ʣ�µ�����ѡ����С����������ǰ���¼����С���������бȽϣ���С����������н���
//3.�ظ��˲���
//
//*/
//bool selectSort(int array[], size_t arrLen) {
//    if (arrLen < 0) {
//        cout << "Please check your input." << endl;
//        return false;
//    }//������鳤��Υ�����򷵻�false
//
//
//    for (int orderedNum = 0; orderedNum < arrLen; ++orderedNum) {
//        int minIndex = orderedNum;//������Сֵ���±�
//        for (int i = orderedNum + 1; i < arrLen; ++i) {
//            if (array[i] < array[minIndex]) {
//                minIndex = i;
//            }//�������ֵС����Сֵ������Сֵ���±���и�ֵ�����������
//        }
//
//        if (minIndex != orderedNum) {
//            int temp = array[orderedNum];
//            array[orderedNum] = array[minIndex];
//            array[minIndex] = temp;
//        }//�����һ��������Сֵ����
//    }
//    return true;
//}
//
//
///*��ӡ����*/
//void printArray(int array[], int arrLen) {
//    for (int i = 0; i < arrLen; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int array0[] = { 5,4,6,2,4 };
//    int arrayLen = sizeof(array0) / sizeof(int);
//
//    printArray(array0, arrayLen);
//    selectSort(array0, arrayLen);
//    printArray(array0, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array1[] = { 1 };
//    arrayLen = sizeof(array1) / sizeof(int);
//
//    printArray(array1, arrayLen);
//    selectSort(array1, arrayLen);
//    printArray(array1, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array2[] = { 2, 1 };
//    arrayLen = sizeof(array2) / sizeof(int);
//
//    printArray(array2, arrayLen);
//    selectSort(array2, arrayLen);
//    printArray(array2, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array3[] = { 1, 5, 3 };
//    arrayLen = sizeof(array3) / sizeof(int);
//
//    printArray(array3, arrayLen);
//    selectSort(array3, arrayLen);
//    printArray(array3, arrayLen);
//
//
//    cout << "=========================================" << endl;
//
//    int array4[] = { 9, 12, 8, 7 };
//    arrayLen = sizeof(array4) / sizeof(int);
//
//    printArray(array4, arrayLen);
//    selectSort(array4, arrayLen);
//    printArray(array4, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array5[] = { 9, 12, 8, 7, 3 };
//    arrayLen = sizeof(array5) / sizeof(int);
//
//    printArray(array5, arrayLen);
//    selectSort(array5, arrayLen);
//    printArray(array5, arrayLen);
//
//
//}