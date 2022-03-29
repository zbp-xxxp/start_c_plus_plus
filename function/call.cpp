#include <iostream>
using namespace std;

// 函数声明(指针调用)
void swap_point(int *x, int *y)
{
   int temp;
   temp = *x;    /* 保存地址 x 的值 */
   *x = *y;        /* 把 y 赋值给 x */
   *y = temp;    /* 把 x 赋值给 y */
  
   return;
}

int swap_x_y(int x, int y)
{
//    int temp;
//    temp = x;    /* 保存 x 的值 */
//    x = y;        /* 把 y 赋值给 x */
//    y = temp;    /* 把 x 赋值给 y */
   int aa;
   int bb;
   aa = x;
   bb = y;

   cout << "aa的值：" << aa << endl;
   cout << "bb的值：" << bb << endl;
  
   return (x, 111);
}

int main ()
{
   // 局部变量声明
   int a = 1;
   int b = 200;
 
   cout << "交换前，a 的值：" << a << endl;
   cout << "交换前，b 的值：" << b << endl;
   cout << "交换前，a 的值：" << &a << endl;
   cout << "交换前，b 的值：" << &b << endl;

   /* 调用函数来交换值
    * &a 表示指向 a 的指针，即变量 a 的地址 
    * &b 表示指向 b 的指针，即变量 b 的地址 
    */
//    swap_point(&a, &b);

//    cout << "交换后，a 的值：" << a << endl;
//    cout << "交换后，b 的值：" << b << endl;
//    cout << "交换后，a 的值：" << &a << endl;
//    cout << "交换后，b 的值：" << &b << endl;

//    cout << "-----分割符（上面是指针调用）-----" << endl;
   int aa;
   int bb;

   aa, bb = swap_x_y(a, b);
   cout << swap_x_y(a, b) << endl;

   cout << "交换后，a 的值：" << aa << endl;
   cout << "交换后，b 的值：" << bb << endl;
   cout << "交换后，a 的值：" << &a << endl;
   cout << "交换后，b 的值：" << &b << endl;
 
   return 0;
}