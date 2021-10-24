#include <iostream>
using namespace std;


/*基数排序的过程：
1.将数据按“位”来进行划分排序
2.定义若干个桶，遍历数据的个位数，对于位数的数值进行排序，放入对应的桶中
3.再对桶中的数据，进行遍历十位数，依次进行排序
4.重复此步骤，直到位序排完，即得到有序数据

*/



unsigned int getRadixValue(unsigned int value, unsigned int radix, unsigned int radixCount) {
    int radixValue = value;
    for (size_t i = 0; i < radixCount; ++i)
    {
        radixValue = radixValue / radix;
    }
    radixValue = radixValue % radix;
    return radixValue;//返回个位数的数值
}

bool radixSort(unsigned int array[], unsigned int arrLen, unsigned int radix) {
    if (arrLen <= 1) {
        return true;
    }

    //Find maximum and minimal value
    int max = array[0];//初始化最大值

    for (unsigned int i = 1; i < arrLen; ++i)
    {
        if (max < array[i]) {
            max = array[i];
        }
    }//寻找最大值

    int radixCount = 0;
    while ((max /= radix) > 0) {
        ++radixCount;//求出最大的数据的位数
    }

    // Create counting buckets   创建桶
    int* countingRadixBuckets = new int[radix]();
    int* tempArray = new int[arrLen](); //创建临时数组

    for (size_t radixIndex = 0; radixIndex <= radixCount; ++radixIndex)
    {
        // Count number of values in array   记录每个桶放进去的元素的个数
        for (size_t j = 0; j < arrLen; ++j)
        {
            ++countingRadixBuckets[getRadixValue(array[j], radix, radixIndex)];
        }

        // Accumulate coutingBuckets to find the last ordered location of value in array  
        //计算
        for (size_t k = 1; k < radix; ++k)
        {
            countingRadixBuckets[k] += countingRadixBuckets[k - 1];
        }

        //Traverse the array in reversed order  将对应的数据放入临时的数组中
        for (int l = arrLen - 1; l >= 0; --l)
        {
            tempArray[--countingRadixBuckets[getRadixValue(array[l], radix, radixIndex)]] = array[l];
        }

        for (size_t m = 0; m < arrLen; ++m)
        {
            array[m] = tempArray[m];//取出临时数值中的数据
        }

        for (size_t n = 0; n < radix; ++n)
        {
            countingRadixBuckets[n] = 0;//每次需将放进桶中的数据大小进行初始化为0
        }

    }

    delete[] countingRadixBuckets;
    delete[] tempArray;

    return true;
}

void printArray(unsigned int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    unsigned int array0[] = {};
    unsigned int arrayLen = sizeof(array0) / sizeof(int);

    printArray(array0, arrayLen);
    radixSort(array0, arrayLen, 10);
    printArray(array0, arrayLen);

    cout << "=========================================" << endl;

    unsigned int array1[] = { 1 };
    arrayLen = sizeof(array1) / sizeof(int);

    printArray(array1, arrayLen);
    radixSort(array1, arrayLen, 10);
    printArray(array1, arrayLen);

    cout << "=========================================" << endl;

    unsigned int array2[] = { 20, 1 };
    arrayLen = sizeof(array2) / sizeof(int);

    printArray(array2, arrayLen);
    radixSort(array2, arrayLen, 10);
    printArray(array2, arrayLen);

    cout << "=========================================" << endl;

    unsigned int array3[] = { 1, 300, 30 };
    arrayLen = sizeof(array3) / sizeof(int);

    printArray(array3, arrayLen);
    radixSort(array3, arrayLen, 10);
    printArray(array3, arrayLen);


    cout << "=========================================" << endl;

    unsigned int array4[] = { 92, 29, 12, 121 };
    arrayLen = sizeof(array4) / sizeof(int);

    printArray(array4, arrayLen);
    radixSort(array4, arrayLen, 10);
    printArray(array4, arrayLen);

    cout << "=========================================" << endl;

    unsigned int array5[] = { 19, 33, 34, 999, 5 };
    arrayLen = sizeof(array5) / sizeof(int);

    printArray(array5, arrayLen);
    radixSort(array5, arrayLen, 10);
    printArray(array5, arrayLen);


    cout << "=========================================" << endl;

    unsigned int array6[] = { 90, 311, 34, 59, 57, 85, 107, 1277, 125, 143, 169, 162 };
    arrayLen = sizeof(array6) / sizeof(int);

    printArray(array6, arrayLen);
    radixSort(array6, arrayLen, 10);
    printArray(array6, arrayLen);
}
