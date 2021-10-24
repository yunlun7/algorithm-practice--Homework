#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;


/*快速排序的过程：
1.随机选取一个属作为中间值，从数组中查找比这个数小的放在左边，比它大的放在右边
2.然后不断地采用这种方法，使用分治思想，递归实现对剩下的区间进行划分比较，直到区间缩短为1
3.无可排序的数截至，则为有序数组

*/


int partition(int array[], size_t arrStart, size_t pivot, size_t arrEnd) {
    int arrayLen = arrEnd - arrStart;//计算数组长度

    if (arrayLen < 1 || pivot < arrStart || pivot >= arrEnd) {
        cout << "Please check your implementation." << endl;
        return -1;
    }//假如数组长度违法，则返回false

    int pivotValue = array[pivot];//中间值
    array[pivot] = array[arrEnd - 1];//初始化为最后一个数值
    int pivotPos = arrStart;
    int temp;//用于交换数值

    for (int i = arrStart; i < arrEnd - 1; ++i)
    {
        if (array[i] < pivotValue) {
            temp = array[pivotPos];
            array[pivotPos] = array[i];
            array[i] = temp;
            ++pivotPos;
        }//假如前者大于中间值，则进行交换
    }
    array[arrEnd - 1] = array[pivotPos];
    array[pivotPos] = pivotValue;

    return pivotPos;
}



bool quickSort(int array[], size_t arrStart, size_t arrEnd) {
    int arrLen = arrEnd - arrStart;//计算数组长度
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }

    if (arrLen == 0 || arrLen == 1) {
        return true;
    }

    srand(array[array[arrStart] + arrLen + array[arrEnd - 1]]);//随机选取一个数作为中间值

    int pivot = arrStart + floor(((arrLen - 1) + (size_t)rand()) % (arrLen - 1));

    int pivotPos = partition(array, arrStart, pivot, arrEnd);

    quickSort(array, arrStart, pivotPos);//扫描pivotpos左边的数组
    quickSort(array, pivotPos + 1, arrEnd);//扫描pivotpos右边的数组

    return true;
}

//输出数组
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