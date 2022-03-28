#include <iostream>
using namespace std;

// 把常量定义为大写字母形式，是一个很好的编程习惯
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
 
int main()
{
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}