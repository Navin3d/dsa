#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a[] = {1,2,2,2,3,3,4,5,6};
  int n = sizeof(a)/sizeof(a[0]);
  int key;
  cin>>key;

  bool isPresent = binary_search(a,a+n, key);
  if(isPresent)
     cout<<"PRESENT"<<endl;
  else
      cout<<"ABSENT"<<endl;
       
      //first occurance of target 
      auto first = lower_bound(a, a+n, 3);    //last is address of the first occurance
      //address of first occurance - address of starting element in array
      cout<<(first-a)<<endl;   //4

      //next occurance of target
      auto last = upper_bound(a, a+n ,3);  //last is address of the last occurance
          //address of last occurance - address of starting element in array
      cout<< (last-a) <<endl;  //6

      //frequency of the target element can be found by upper_bound and lower_bound
      cout<<(last- first)<<endl;      //2


}