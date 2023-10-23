/*
条件语句
if(条件成立) {
  代码体
}

if(条件成立) {
  代码体
} else {
  否则
}

if(条件1成立) {
  代码体
} else if(条件2成立) {
  代码体
} else {
  否则
}

关系运算符
>
<
>=
<=
!=

逻辑运算符
&&
||
!

break退出循环
continue跳出当前循环
*/

#include<iostream>
using namespace std;
int main() {
   int a, b;
   while(cin >> a >> b) {
      if(a == 0 && b == 0) {
        break;
      }
      cout << a + b << endl;
   }
}





