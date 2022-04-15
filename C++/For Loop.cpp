#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a=0,b=0;
    string numcase[10] = {"zero","one","two","three","four","five","six","seven",                               "eight","nine"};
    cin >> a >> b;
    for (int i=a;i<=b;i++)
    {
        if (i>9)
        {
            i%2==0 ? cout << "even\n" : cout << "odd\n"; //used ternary operator
        } 
        else 
        {
        cout << numcase[i] << endl;
        }        
    }    
    return 0;
}
