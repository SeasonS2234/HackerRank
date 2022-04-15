#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    int q=0;
    cin >> n >> q;
    vector<int> a[n];
    for(int i=0;i<n;i++)
    {
        int m=0;
        cin >> m;
        int o=0;
        for(int j=0;j<m;j++)
        {
            cin >> o;
            a[i].push_back(o);
        }
    }
    
    int r=0, s=0;
    for(int k=1; k<=q;k++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}
