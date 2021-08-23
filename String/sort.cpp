#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{ int n;
cin>>n;
cin.get();
string str[100];

for(int i=0; i<n ; i++){
    getline(cin,str[i]);
}

sort(str , str+n);            //lexicographical order

for(int i=0 ; i<n;i++ ){
    cout<<str[i]<<endl;
}


}
