#include <iostream>
using namespace std;

//time complexity is O(n^2)

int oneOdd(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count % 2 != 0)
            return arr[i];
        
    }
}


int main()
{
    	int arr[]= {4,3,4}, n = 3;
	
    cout<<oneOdd(arr, n);
    return 0;
}
