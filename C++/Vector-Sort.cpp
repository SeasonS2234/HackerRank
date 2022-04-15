#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N=0,i=0,input=0;
    cin >> N;
    vector<int> v1;
    for(i=0;i<N;i++){
        cin >> input;
        v1.push_back(input);
    }
    sort(v1.begin(),v1.end());
    for(i=0;i<N;i++){
        cout << v1[i] << " ";
    }
    return 0;
}
