#include <iostream>
using namespace std;

int main(){
    char ans;
    ans = cin.get();


    int alpha = 0 , digit=0, space =0;

    while( ans != '\n'){

        if(ans>='0' and ans<='9')
            digit++;
        else if(ans>='a' and ans<='z'  or  ans>='A' and ans<='Z')
            alpha++;

        else if(ans == ' ' or ans ==  '\t')
          space++;
        ans = cin.get();
    }

    cout<<alpha<<" "<<digit<< " "<<space;
}