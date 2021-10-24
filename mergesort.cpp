#include <iostream>
#include <math.h>
using namespace std;


/*归并排序的过程：
1.将数据进行不断地分解，直至数组长度为1，依次对数据进行前后两两排序，然后进行合并的过程
2.采用递归的分治思想
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
    int tempIndex = 0;//临时数组下标

    /*遍历首-中间值，进行排序，并将排好序的数据装进临时数组*/
    while (i < arrMiddle && j < arrEnd) {
        //假如前者大于中间值，则将对应的arrMiddle值赋值进临时数组中
        if (array[i] > array[j]) {
            temp[tempIndex] = array[j];
            ++j;
        }
        //否则将arrMiddle值赋值进临时数组
        else {
            temp[tempIndex] = array[i];
            ++i;
        }
        ++tempIndex;
    }

    
    while (i < arrMiddle) {
        temp[tempIndex++] = array[i++];
    }

    /*遍历中间值-尾，进行排序，并将已排序好的数据装进临时数组中*/
    while (j < arrEnd) {
        temp[tempIndex++] = array[j++];
    }

    //将临时数组中的数据依次放回原数组中
    for ((tempIndex = 0, i = arrStart); (tempIndex < arrLen && i < arrEnd); (++tempIndex, ++i)) {
        array[i] = temp[tempIndex];
    }

    delete[]temp;
    temp = NULL;

    return true;
}


bool mergeSort(int array[], size_t arrStart, size_t arrEnd) {
    int arrLen = arrEnd - arrStart;//求数组长度
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }

    if (arrLen == 0 || arrLen == 1) {
        return true;
    }

    int middle = arrStart + floor(arrLen / 2);//求数组的中间值

    mergeSort(array, arrStart, middle);//从首-中间值进行不断的拆分
    mergeSort(array, middle, arrEnd);//从中间值-尾进行不断的拆分
    return merge(array, arrStart, middle, arrEnd);//合并
}
//打印数据
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