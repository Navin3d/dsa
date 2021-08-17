#include <iostream>
using namespace std;

int sieve[1000000];
void create(int n){
    for(int i=1 ; i<= n ;i++)
        sieve[i] = i;

    for(int i=2;i*i <= n;i++){
            if(sieve[i] == i){
                for(int j=i*i;j<=n;j= j+i){
                    if(sieve[j] == j)
                        sieve[j] = i;
                }
            }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        create(n);

        while(n != 1){
            cout<<sieve[n]<<" ";
            n=n/sieve[n];
        }
        cout<<endl;
    }
}
