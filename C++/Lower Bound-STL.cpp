#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N=0,i=0,input=0,query=0,q;
    vector<int> v1;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> input;
        v1.push_back(input);
    }
    cin >> query;
    for(i=0;i<query;i++){
        cin >> q;
        auto low = lower_bound(v1.begin(),v1.end(),q);
        if(v1[low-v1.begin()] == q){
            cout << "Yes" << " " << low-v1.begin()+1 << endl;// +1 bcoz of lower-bound and 1 based index
        }
        else{
            cout << "No" << " " << low-v1.begin()+1 << endl;
        }
    }
    return 0;
}
