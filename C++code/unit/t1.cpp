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


