#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int res=0;
    if (a>b && a>c && a>d)
        res = a;
    else if (b>c && b>d)
        res = b;
    else if (c>d)
        res = c;
    else
        res = d;
    return res;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}