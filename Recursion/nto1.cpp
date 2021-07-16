#include <iostream>
using namespace std;

void prints(int n){
    if(n>0){                //base case
       cout<<n<<" ";
       prints(n-1);   
    }
}

int main()
{
    int n;
    cin>>n;
    prints(n);

    return 0;
}
