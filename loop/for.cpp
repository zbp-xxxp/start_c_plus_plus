#include <iostream>
using namespace std;
 
// for 语句中的三个表达式可部分或全部省略，但两个分号不能省略。

int normal ()
{
   // for 循环执行
   int a = 10;
   for( a; a < 20; a = a + 1 )
   {
       cout << "a 的值：" << a << endl;
   }
   cout << "a 的最终结果：" << a << endl;
 
   return 0;
}

// 基于范围的for循环
int range(){
    int my_array[5] = {1, 2, 3, 4, 5};
    // 每个数组元素乘于 2
    for (int &x : my_array)
    {
        x *= 2;
        cout << x << endl;  
    }
    return 0;
}

int main (){
    normal();
    cout << "-----分隔符-----" << endl;
    range();
    return 0;
}