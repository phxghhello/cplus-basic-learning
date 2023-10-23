/*
输入一个整数n来控制输入a, b的次数
循环在输入n这个操作,使用while


while(cin>>n) {
    // 
}

for(初始化语句; 条件判断; 操作) {
    // 
}

操作符
++
--

至少执行1次
do {} while()
*/
#include<iostream>
using namespace std;
int main() {
    // 定义变量n接收输入的次数, 定义a和b接收输入的两个值
    int n, a, b;
    // 使用while循环接收持续输入的n
    while(cin>>n) {
        // 使用for循环执行n次的输入和输出
        for(int i = 0; i < n; i++) {
            cin >> a >> b;
            cout << a + b << endl;
        }
    }
}