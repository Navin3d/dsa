// O(n)
#include <iostream>
using namespace std;

int second(int a[], int n){
    int first=0;
    int second=0;
    for(int i=0;i<n;i++){
        if(a[i]>first){
            second = first;
            first= a[i];
        }
        else if(a[i]>second)
            second=a[i];
    }
    return second;
}

int main()
{
    int a[] = {1,4,65,3,5,100};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<second(a,size);
    return 0;
}
