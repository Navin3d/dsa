// O(n)

#include <iostream>
using namespace std;

int dup(int a[] , int n){
    int res = 1;
    for(int i=1 ; i<n; i++){ 
        if(a[i] != a[res-1])     
        {
            a[res] = a[i];
            res++; 
        }
      
    } 
    
      return res;
}
int main() {
     int a[] = {2,3,4,4,5,6,6};   
   int size = sizeof(a)/sizeof(a[0]);
  int ans =  dup(a,size);
  for(int i=0;i<ans;i++)
    cout<<a[i]<<" ";
    
   return 0;
}
