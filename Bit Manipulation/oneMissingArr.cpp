 // You are given a list of n-1 integers and these integers are in the range of 1 to n.
// There are no duplicates in the list. 
// One of the integers is missing in the list. Write an efficient code to find the missing integer.


#include <bits/stdc++.h>
using namespace std;

int getMissingNo(int a[], int n)
{
	int x1 = a[0];
	int x2 = 1;

	for (int i = 1; i < n; i++)
		x1 = x1 ^ a[i];

	for (int i = 2; i <= n + 1; i++)
		x2 = x2 ^ i;

	return (x1 ^ x2);
}

int main()
{
	int arr[] = { 3,4,5,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int miss = getMissingNo(arr, n);
	cout << miss;
}
