#include <bits/stdc++.h>
using namespace std;

void substring(string str){
    int n=str.size();
    int power = pow(2,n);
    
    for(int i=0;i<power;i++){
        for(int j=0;j<n;j++){
            if((i & (1<<j)) != 0)
              cout<<str[j];
        }
        cout<<endl;
        
    }
}

int main()
{
    /* str ="abc" 
     
       " "  a  b  c  ab  bc  ac  abc 
       
    */
    
    string str;
    cin>>str;
    
    substring(str);

    return 0;
}
