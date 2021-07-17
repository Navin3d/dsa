#include <iostream>
using namespace std;

void subset(string str, string c , int i){
   if(i==str.size()){
       cout<<c<<" ";
     return;  
   }
     
   subset(str , c , i+1);
   subset(str,c+str[i], i+1);
}


int main(){
  string str;
  string c= " ";
  int i=0;
  cin>>str;
  subset(str,c,i);
  return 0;
}
