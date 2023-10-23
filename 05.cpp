#include<iostream>
using namespace std;
int main() {
    // 定义变量n, 表示改组测试有n行
    // m 当前行m个数据
    // a 代表输入的数据(需要累加的数据)
    int n, m, a;
    while(cin >> n) {
        while(n--) {
            // 接收输入的整数
            cin >> m;
            int sum = 0;
            while(m--) {
                cin >> a;
                sum += a;
            }
            
            cout << sum << endl;
            // 每组数据的最后，不需要输出空行
            if (n != 0) cout << endl;
        }
    }
}