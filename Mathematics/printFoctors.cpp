#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        for(int i=1 ; i*i<=x;i++){
            if(x%i == 0){
                cout<<i<<endl;
            if((x/i) != i)
               cout<<(x/i)<<endl;
        }
            }
    }

    return 0;
}
