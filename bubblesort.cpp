#include <iostream>
#include <math.h>
using namespace std;

/*冒泡排序的过程
1.比较两个相邻的元素，若前者比后者大，则交换；
2.将每相邻的俩元素进行比较，通过这样最后的元素就会是最大的数
3.重复此步骤，直到没有元素可比较为止

*/
bool bubbleSort(int array[], size_t arrLen) {
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }//假如数组长度违法，则返回false

    
    for (int orderedNum = 0; orderedNum < arrLen; ++orderedNum) {
        bool isExchanged = false;//令开始还没进行交换赋值isExchange为false
        for (int i = 0; i < arrLen - orderedNum - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isExchanged = true;//假如前面的数大于后面的数则进行交换，并将isExchange赋值为true
            }
        }
        if (!isExchanged) {
            break;//如果未进行交换，跳出循环
        }
    }
    return true;
}

//更优化的解决方法
bool bubbleSort_Sheng(int array[], size_t arrLen) {
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }
    int orderedNum = 0;//初始化排序趟数
    while (true) {
        bool isExchanged = false;
        //循环i为每次排序的次数
        for (int i = 0; i < arrLen - orderedNum - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isExchanged = true;//若前者比后者大，则交换，并设isExchange为true
            }
        }

        if (!isExchanged) {
            break;
        }

        ++orderedNum;
    }
    return true;
}
//输出函数
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