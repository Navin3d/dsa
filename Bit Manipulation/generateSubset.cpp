#include <bits/stdc++.h>
using namespace std;

void generateSubset(string str , int n){
    
    int j=0;
    while(n>0){
        int lastBit = n&1;
        if(lastBit)
        {
            cout<<str[j];
        }
        j++;
        n = n>>1;
    }
    
    cout<<endl;
}

void stringLength(string str)
{
    int n= str.size();
    for(int i=0 ; i< (1<<n) ;i++)
        generateSubset(str ,  i);
    return;
}

int main()
{
    string str;
    cin>>str;
   
    stringLength(str);

    return 0;
}


/*
input = abc
output 

a
b
c
ab
ac
bc
abc  */

