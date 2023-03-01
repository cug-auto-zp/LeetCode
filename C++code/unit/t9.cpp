/*
9. 回文数
和python的解法思路一样转为字符串，在使用字符串翻转
一开时我想这使用char类型但是在调用char翻转函数时会报错
就直接用string类型编写代码

*/

// 如下为我leetcode提交代码

class Solution {
public:
    bool isPalindrome(int x) {
    string s;
    string s1;
    s = to_string(x); 
    s1 = to_string(x); 
    // cout << s << endl;
    reverse(s.begin(),s.end());
    // cout << s << endl;
	if (s==s1)
		return true;
	else
		return false;
    
    }
};




// 如下为我测试代码
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool ispal(int x) {

    string s;
    string s1;
    s = to_string(x); 
    s1 = to_string(x); 
    cout << s << endl;
    reverse(s.begin(),s.end());
    cout << s << endl;
	if (s==s1)
		cout << "Ture" << endl;
	else
		cout << "False" << endl;
    
    return s==s1;
}

int main()
{
    
cout << boolalpha<< ispal(-121) << endl;
return 0;

}


