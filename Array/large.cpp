#include <iostream>
using namespace std;
int large(int a[] , int n){
  int large = a[0];
  for(int i=1;i<n;i++){
      if(a[i]>large)
         large  =a[i];
  }
  
  return large;
  
}

int main()
{
    int a[] = {1,4,65,3,5,100};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<large(a,size);

    return 0;
}
