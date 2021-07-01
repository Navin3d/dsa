//NAIVE APPROACH TO FIND THE POWER TO 2

#include <iostream>
using namespace std;

bool isPow2(int n)
{
    if(n == 0)
        return false;
    while(n != 1)
    {
        if(n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}


int main() {
	
	int n ;
	cout<<"Enter a number: ";
	cin>>n;
	
	printf("%s", isPow2(n)? "true": "false");
}
