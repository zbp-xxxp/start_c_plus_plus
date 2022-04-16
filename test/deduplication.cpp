#include<iostream>
using namespace std;

bool repeat(int *List, int num) {
    for (int i=0; i<=sizeof(List)/sizeof(int); i++) {
        if (List[i] == num) return true;
    }
    return false;
}

int main() {
    int List[10] = {10, 1, 1, 10, 2, 1, 3, 2, 1, 10};
    cout << "去重前：" << endl;
    for (int i=0; i<10; i++) {
        cout << List[i] << " ";
    }cout << endl;

    int new_List[10];
    new_List[0] = List[0];
    int j = 1;
    for (int i=1; i<sizeof(List)/sizeof(int); i++) {
        if (repeat(new_List, List[i]) == false) {
            new_List[j] = List[i];
            j++;
        }
    }

    cout << "去重后：" << endl;
    for (int i=0; i<j; i++) {
        cout << new_List[i] << " ";
    }cout << endl;
    return 0;
}