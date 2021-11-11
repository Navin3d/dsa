#include <iostream>
using namespace std;

void KthBit(int n, int k)
{
  int use = 1<<k;
    if((n&use) == 0)
       cout<<0;

    else
      cout<<1;	
}


int main()
{
	int n, k;
	cout << "Enter n and k to check if kth bit in n is set or not: ";
	cin >> n >> k;
	KthBit(n, k);
	return 0;
}
