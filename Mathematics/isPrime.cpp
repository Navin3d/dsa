// prime number is the number that divides by 1 and itself and has the number of factorial as 2

//o( sqrt(n)  )
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;         //11
    int c=0; 
    for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                c++;
                if( (n/i) != i)
                  c++;
            }
    }
    
    if(c==2)
      cout<<"prime";
    else
     cout<<" not prime";
    
    return 0;
}
