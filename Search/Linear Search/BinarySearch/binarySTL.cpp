#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a[] = {1,2,3,4,5,6};
  int n = sizeof(a)/sizeof(a[0]);
  int key;
  cin>>key;

  bool isPresent = binary_search(a,a+n, key);
  if(isPresent)
     cout<<"PRESENT";
  else
      cout<<"ABSENT";
}