#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function
    int temp1=*a;
    *a = *a + *b;
    *b = temp1 - *b;
    *b = abs(*b); //used abs()function . Be sure to add #include<cstdlib>       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}