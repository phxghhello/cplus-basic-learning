#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin >> n) {
        // 当n等于0的时候,结束循环
        if(n == 0) break;
        // 定义变量sum, 用于每次累加
        int sum = 0;
        // 定义一个变量a, 用于接收每次输入的数值
        int a;
        while(n--) {
            cin >> a;
            // 累加
            sum += a;
        }
        // 输入
        cout << sum << endl;
    }
}

/*
算术运算
+  -  *  /  %
*/