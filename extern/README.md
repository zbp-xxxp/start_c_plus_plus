extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。

使用 'extern' 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。

有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。

可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。

extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候。

support.cpp中定义了write_extern方法，可以通过extern关键字在main.cpp中调用write_extern方法。

同时编译这两个文件：

```
g++ main.cpp support.cpp -o write
```