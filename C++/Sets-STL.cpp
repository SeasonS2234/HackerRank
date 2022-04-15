#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int query=0,i=0;
    set<int> s1;
    cin >> query;
    for(i=0;i<query;i++){
        int y=0,x=0;
        cin >> y >> x;
        switch(y){
            case 1:
                s1.insert(x);
                break;
            case 2:
                s1.erase(x);
                break;
            case 3:
               set<int>::iterator itr=s1.find(x);
               if(itr == s1.end()){
                   cout << "No" << endl;
               }
               else{
                   cout << "Yes" << endl;
                   break;
               } 
        }
    }
    return 0;
}



