#include <iostream>
using namespace std;

int expo(int a , int b){
    int ans = 1;
    while(b>0){
      int lastBit = b&1;
      if(lastBit){
          ans = ans*a;
      }
      
      a = a*a;   //square up
      b = b>>1;     //discard the last bit
    }
    
    return ans;
    
}

int main()
{
    int a , b;
    cin>>a>>b;
    cout<<expo(a,b);
//    cout<<"Hello World";

    return 0;
}
