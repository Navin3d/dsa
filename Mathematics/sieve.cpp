#include <iostream>
using namespace std;

bool sieve(int n){
    bool a[100000];
    for(int i=2 ; i<=n ; i++)
       a[i] =  true;
    for(int i = 2 ; i*i<=n ;i++){
        if(a[i] == true){
            for(int j = i*i; j<=n; j= j+i){
                a[j] = false;
            }
        }
    }
    return a[n];
}


int main()
{
    int n;
    cin>>n;
 if(sieve(n))
   cout<<"Prime";
   else 
   cout<<"Not a prime";
}
