/*
数组
vector

数组: 用于存储相同数据类型的元素的数据结构;
相同数据类型  固定大小  连续存储  下标访问(索引)
dataType arrayName[arraySize]

vector容器 表示对象的集合, 动态地存储一组元素
#include <vector>
using std::vector;

vector<dataType> arrayName;
.push_back(元素)
.size() 
.pop_back()
.clear()
.empty()

*/
// 使用数组:
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     // 声明一个大小为n的数组
//     int arr[n];
//     // 输入数组元素
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     // 倒序输出元素
//     for(int i = n - 1; i >= 0; i--) {
//         cout << arr[i];
//         // 每个数之间使用空格分隔
//         if(i > 0) {
//             cout << " ";
//         }
//     }
//     cout << endl;
//     // 隔位输出数组元素
//     for(int i = 0; i < n; i+= 2) {
//         cout << arr[i];
//         if(i < n - 1) {
//             cout << " ";
//         }
//     }
//     return 0;
// }

// 使用vector:
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr;
    int n, num;
    cin >> n;

    // 输入数组元素
    for(int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
        // arr[i] = num;
    }
    // 倒序输出元素
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        // 每个数之间使用空格分隔
        if(i > 0) {
            cout << " ";
        }
    }
    cout << endl;
    // 隔位输出数组元素
    for(int i = 0; i < n; i+= 2) {
        cout << arr[i];
        if(i < n - 1) {
            cout << " ";
        }
    }
    return 0;
}
