//Long prime check (eg:10^12 , 10^13 , 10614..)

#include <iostream>
using namespace std;

int a[10000000];
void sieve(){
    for(int i=2;i<=10000000 ; i++)
        a[i] = 1;
    
    for(int i=2 ; i*i<= 10000000 ; i++){
        if(a[i] == 1){
            for(int j = i*i ; j<=10000000 ; j=j+i)
               a[j] = 0;
        }
    }
    
}

bool isPrime(long long int n){
    if(n<=10000000)       
          return a[n]==0? false: true;
    // {
    //     if(a[n] == 1)
    //       return true;
    //       else
    //         return false;
    // }
    
    for(long long int i=2 ; (long long)i*(long long)i<=n ; i++){
        if(n%i == 0)
          return false;
    }
    
    return true;
}

int main()
{
    sieve();
    long long int n;
    cin>>n;
    if(isPrime(n))
    cout<<"Prime";
    else
    cout<<"Not a Prime";
    return 0;
}
