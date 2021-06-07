#include <iostream>
using namespace std;

void KthBit(int n, int k)
{
	if (n & (1 << (k - 1)))
		cout << "SET";
	else
		cout << "NOT A SET";
}

// Driver code
int main()
{
	int n, k;
	cout << "Enter n and k to check if kth bit in n is set or not: ";
	cin >> n >> k;
	KthBit(n, k);
	return 0;
}