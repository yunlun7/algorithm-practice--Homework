//#include <iostream>
//#include <math.h>
//using namespace std;
//
///*插入排序过程：
//1.将数组分为两部分，一部分是已经排序好的，一部分为未排序好的元素
//2.取第一个元素为已排序好的元素，再取下一个元素temp，对已排序的元素进行逐个比较，从后往前进行；
//若已排序元素大于未排序元素，则交换位置，否则不进行交换
//3.重复此步骤，直到整个数组成为有序的为止
//
//*/
//
///*当数组个数为偶数时，调用此函数进行排序*/
//bool insertSort(int array[], size_t arrLen) {
//    if (arrLen < 0) {
//        cout << "Please check your input." << endl;
//        return false;
//    }//若数组长度违法则，返回false
//
//    for (int orderedNum = 1; orderedNum < arrLen; ++orderedNum) {
//        int insertValue = array[orderedNum];//记录待插入的数
//        int orderedIndex = orderedNum - 1;//记录已排序好的下标
//        for (; orderedIndex >= 0; --orderedIndex) {
//            /*如果待插入的数小于已排序好的数，则已排序好的数下标往后移*/
//            if (insertValue < array[orderedIndex]) {
//                array[orderedIndex + 1] = array[orderedIndex];
//            }
//            /*否则跳出循环*/
//            else {
//                break;
//            }
//        }
//        array[orderedIndex + 1] = insertValue;//将待插入的数放到比已排序的数小的后面
//    }
//
//    return true;
//}
//
///*当数组个数为奇数时，调用此函数进行排序*/
//bool insertSort_Sen(int array[], size_t arrLen) {
//    if (arrLen < 0) {
//        cout << "Please check your input." << endl;
//        return false;
//    }
//
//    for (int orderedNum = 1; orderedNum < arrLen; ++orderedNum) {
//        int insertValue = array[orderedNum];
//        int orderedIndex = orderedNum - 1;
//        while (orderedIndex >= 0 && array[orderedIndex] > insertValue) {
//            array[orderedIndex + 1] = array[orderedIndex];
//            --orderedIndex;
//        }
//        array[orderedIndex + 1] = insertValue;
//    }
//
//    return true;
//}
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
//    int array0[] = {5,4,6,2,4};//定义数组
//    int arrayLen = sizeof(array0) / sizeof(int);//计算数组长度
//
//    printArray(array0, arrayLen);
//    insertSort(array0, arrayLen);
//    printArray(array0, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array1[] = { 1 };
//    arrayLen = sizeof(array1) / sizeof(int);
//
//    printArray(array1, arrayLen);
//    insertSort_Sen(array1, arrayLen);
//    printArray(array1, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array2[] = { 2, 1 };
//    arrayLen = sizeof(array2) / sizeof(int);
//
//    printArray(array2, arrayLen);
//    insertSort(array2, arrayLen);
//    printArray(array2, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array3[] = { 1, 5, 3 };
//    arrayLen = sizeof(array3) / sizeof(int);
//
//    printArray(array3, arrayLen);
//    insertSort_Sen(array3, arrayLen);
//    printArray(array3, arrayLen);
//
//
//    cout << "=========================================" << endl;
//
//    int array4[] = { 9, 12, 8, 7 };
//    arrayLen = sizeof(array4) / sizeof(int);
//
//    printArray(array4, arrayLen);
//    insertSort(array4, arrayLen);
//    printArray(array4, arrayLen);
//
//    cout << "=========================================" << endl;
//
//    int array5[] = { 9, 12, 8, 7, 3 };
//    arrayLen = sizeof(array5) / sizeof(int);
//
//    printArray(array5, arrayLen);
//    insertSort_Sen(array5, arrayLen);
//    printArray(array5, arrayLen);
//
//
//}