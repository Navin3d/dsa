#include <iostream>
using namespace std;

void reverse(int a[] , int n){
    int start =0 , end= n-1;
    while(start<end){
        
        //swap  
        int temp =a[start];          //   swap(a[start] , a[end]);
         a[start] = a[end];
         a[end] = temp;
        
        
         end--;
         start++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    reverse(a,size);
    return 0;
}
