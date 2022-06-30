#include<iostream>
using namespace std;

bool repeat(int *List, int num) {
    int List_length = sizeof(List)/sizeof(int); // 数组长度
    for (int i=0; i<=List_length; i++) {
        if (List[i] == num) { // 判断数组内是否存在元素num
            return true; // 存在，则返回ture
        }
    }
    return false; // 不存在，则返回false
}

int main() {
    int List[10] = {10, 1, 1, 10, 2, 1, 3, 2, 1, 10}; // 自定义一个待排序数组
    // 下面4行用来输出待去除数组
    cout << "去重前：" << endl;
    for (int i=0; i<10; i++) {
        cout << List[i] << " ";
    }cout << endl;

    int new_List[10]; // 新建一个数组用来存放去重后的元素
    new_List[0] = List[0]; // 原数组中第一个元素肯定是不会重复的
    int j = 1; // 从第2个（索引J+1）开始存储不重复元素
    int List_length = sizeof(List)/sizeof(int); // 数组长度
    for (int i=1; i<List_length; i++) { // 遍历原数组中每个元素
        if (repeat(new_List, List[i]) == false) { // 判断 原数组 中第i个元素是否在 存储不重复元素的数组中
            new_List[j] = List[i]; // 不存在，则将原数组中第i个元素存放在 存储不重复元素的数组中的第j个索引里
            j++;
        }
    }

    // 下面4行用来输出已去重数组
    cout << "去重后：" << endl;
    for (int i=0; i<j; i++) {
        cout << new_List[i] << " ";
    }cout << endl;
    return 0;
}