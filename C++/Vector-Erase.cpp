#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N=0,i=0,input=0;
    vector<int> v1;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>input;
        v1.push_back(input);
    }
    int posRemove = 0;
    cin>>posRemove;
    v1.erase(v1.begin()+posRemove-1);
    int startPos,endPos;
    cin>>startPos>>endPos;
    v1.erase(v1.begin()+startPos-1,v1.begin()+endPos-1); // used pos-1 coz (1-based index)
    cout<<v1.size()<<endl;
    for(auto i : v1)
    {
        cout<<i<<" ";
    }
    return 0;
}
