#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2,tmp;
    cin >> s1;
    cin >> s2;
    cout << s1.size() << " " << s2.size() << endl;
    cout << s1+s2 << endl;
    //swap logic
    tmp[0]=s1[0];
    tmp[1]=s2[0];
    s1[0]=tmp[1];
    s2[0]=tmp[0];
    cout << s1 << " " << s2;
    return 0;
}
