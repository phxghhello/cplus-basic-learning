#include<iostream>
// 函数
/* int 表示返回类型 
   main表示函数名称, 这里是主函数, 名称不可更改
   ()内是形参列表
   {}内是函数体
   
   主函数有且只有一个
   
   内置库,包含很多常用的功能, 并且内置库可以直接使用
   其中, iostream:输入和输出的功能,包含两个基础类型, 分别是istream(输入流)和ostream(输出流)
   
   流:把键盘上的字符通过程序输入到电脑,这个过程就是一个字符接着一个字符流入电脑的过程,
   所以叫输入输出流
   
   iostream库, 两个对象cin和count, cin:标准输入流对象,从键盘读取输入; 
   count:标准输出流对象,用于向屏幕输出结果
   
   变量
   int a;
   
   std命名空间 :: 作用域操作符
   
   >> 输入运算符
   将数据从输入流读取到变量中
   
   << 输出运算符
   
   std::endl结束当前行
   
   while(条件) {} 循环
*/

// int main() {
    
//     // 声明变量
//     int a, b;
//     // 循环输入
//     while(std::cin >> a >> b) {
//         int result = a + b;
//         std::cout << result << std::endl;
//     }
//     return 0;
// }

// 简化: 在函数开头, 统一声明使用命名空间std
using namespace std;
int main() {
    
    // 声明变量
    int a, b;
    // 循环输入
    while(cin >> a >> b) {
        int result = a + b;
        cout << result << endl;
    }
    return 0;
}