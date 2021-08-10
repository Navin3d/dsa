#include <iostream>
using namespace std;

void insertion_sort(int a[],int n){
    for(int i = 1;i<n;i++){
        int p = a[i];
        int j=i-1;
        while(j>=0 & a[j]>p){
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = p;
    }
}

int main()
{
   int a[] = {5,3,7,1,2};
  int size = sizeof(a)/sizeof(a[0]);
  insertion_sort(a,size);
  for(int i=0;i<size ;i++){
      cout<<a[i]<<" ";
  }
  
    return 0;
}
