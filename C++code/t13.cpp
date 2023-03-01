/*
13.罗马数字转整型

这道题的解题思路：将单个字符对应的数字填入数组中存放，
再根据六种情况分为三个if中写完从来更新数组中的数值，
最后求和计算用到了：if, continue, switch...case...语句，c++中求和函数accumulate()。

*/

// 提交代码如下所示
class Solution {
public:
    int romanToInt(string s) {
    int n = s.size();
    int a[n];
    for(int i=0;i<n;i++)
    {
     if(i != 0 && (s[i-1]=='I' && (s[i]=='V' || s[i]=='X')))
     {
        a[i-1] = -1;
        if (s[i]=='V')
        {
            a[i] = 5;  
        }
        else
        {
            a[i] = 10;
        }
        continue;
     }
     if(i != 0 && (s[i-1]=='X' && (s[i]=='L' || s[i]=='C')))
     {
        a[i-1] = -10;
        if (s[i]=='L')
        {
            a[i] = 50;  
        }
        else
        {
            a[i] = 100;
        }
        continue;
     }
     if(i != 0 && (s[i-1]=='C' && (s[i]=='D' || s[i]=='M')))
     {
        a[i-1] = -100;
        if (s[i]=='D')
        {
            a[i] = 500;  
        }
        else
        {
            a[i] = 1000;
        }
        continue; 
     }
     switch(s[i])
     {
        case 'I':
            a[i] = 1;
            break;
        case 'V':
            a[i] = 5;
            break;
        case 'X':
            a[i] = 10;
            break;
        case 'L':
            a[i] = 50;
            break;
        case 'C':
            a[i] = 100;
            break;
        case 'D':
            a[i] = 500;
            break;
        case 'M':
            a[i] = 1000;
            break;
     }
    } 
return accumulate(a,a+n,0);  

    }
};


// 编译器中编写的代码
#include <iostream>
#include <numeric>
#include <string>
#include <algorithm>
using namespace std;
int romanToInt(string s) {
    int n = s.size();
    int a[n];
    for(int i=0;i<n;i++)
    {
     if(i != 0 && (s[i-1]=='I' && (s[i]=='V' || s[i]=='X')))
     {
        a[i-1] = -1;
        if (s[i]=='V')
        {
            a[i] = 5;  
        }
        else
        {
            a[i] = 10;
        }
        continue;
     }
     if(i != 0 && (s[i-1]=='X' && (s[i]=='L' || s[i]=='C')))
     {
        a[i-1] = -10;
        if (s[i]=='L')
        {
            a[i] = 50;  
        }
        else
        {
            a[i] = 100;
        }
        continue;
     }
     if(i != 0 && (s[i-1]=='C' && (s[i]=='D' || s[i]=='M')))
     {
        a[i-1] = -100;
        if (s[i]=='D')
        {
            a[i] = 500;  
        }
        else
        {
            a[i] = 1000;
        }
        continue; 
     }
     switch(s[i])
     {
        case 'I':
            a[i] = 1;
            break;
        case 'V':
            a[i] = 5;
            break;
        case 'X':
            a[i] = 10;
            break;
        case 'L':
            a[i] = 50;
            break;
        case 'C':
            a[i] = 100;
            break;
        case 'D':
            a[i] = 500;
            break;
        case 'M':
            a[i] = 1000;
            break;
     }
    } 
return accumulate(a,a+n,0);
}

int main()
{
string s = "MCDLXXVI";
int a = romanToInt(s); 
cout << a << endl;
return 0;

}





