#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int c=0;
        for(int i=1 ; i*i<=x;i++){
            if(x%i == 0){
                c++;
            if((x/i) != i)
                c++;
        }
            }
       cout<<c<<endl;
    }

    return 0;
}