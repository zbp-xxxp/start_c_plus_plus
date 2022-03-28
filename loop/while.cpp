#include <iostream>
using namespace std;

// 当 a 值一直减到 0 时，退出 while 循环，但是还要继续做 a --操作，所以 a 最后的值就是 -1。
void compare(void){
    int a = 10;
    while( a -- ){
        cout << "a 的值：" << a << endl;
    }
    cout << "a 最终的值：" << a << endl;
}


int main ()
{
   // 局部变量声明
   int a = 10;

   // while 循环执行
   while( a < 20 )
   {
       cout << "a 的值：" << a << endl;
       a++;
   }
   cout << "a 最终的值：" << a << endl;

   cout << "-----分界线-----" << endl;

   compare();
 
   return 0;
}