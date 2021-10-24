//#include <iostream>
//#include <math.h>
//using namespace std;
//
//
///*选择排序的过程：
//1.选出数组中最小的数和第一个数进行交换
//2.再剩下的数中选择最小的数进行与前面记录的最小的数数进行比较，若小于它，则进行交换
//3.重复此步骤
//
//*/
//bool selectSort(int array[], size_t arrLen) {
//    if (arrLen < 0) {
//        cout << "Please check your input." << endl;
//        return false;
//    }//如果数组长度违法，则返回false
//
//
//    for (int orderedNum = 0; orderedNum < arrLen; ++orderedNum) {
//        int minIndex = orderedNum;//定义最小值的下标
//        for (int i = orderedNum + 1; i < arrLen; ++i) {
//            if (array[i] < array[minIndex]) {
//                minIndex = i;
//            }//待排序的值小于最小值，则将最小值的下标进行赋值给待排序的数
//        }
//
//        if (minIndex != orderedNum) {
//            int temp = array[orderedNum];
//            array[orderedNum] = array[minIndex];
//            array[minIndex] = temp;
//        }//将最后一个数和最小值交换
//    }
//    return true;
//}
//
//
///*打印数组*/
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