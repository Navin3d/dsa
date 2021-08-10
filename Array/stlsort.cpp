
#include<algorithm>
#include <iostream>

using namespace std;

bool compare(int a , int b){
    return a>b;
}
int main()
{
    int a[] = {5,3,7,1,2};
  int size = sizeof(a)/sizeof(a[0]);
    
 sort(a,a+size);
  for(int i=0;i<size ;i++){
      cout<<a[i]<<" ";                //increasing order
  }
  cout<<endl;
 sort(a,a+size, compare);
  for(int i=0;i<size ;i++){
      cout<<a[i]<<" ";           // decreasing order
  }

    return 0;
}
