#include <bits/stdc++.h>
using namespace std;

int main()
{
   	int a[3][3] = {{1, 2, 3},
				   {9, 11, 12},
				   {13,15, 16}};
      
    for(int i =0 ; i<3 ; i++){
        for(int j=i+1; j<3 ;j++){
            swap(a[i][j] , a[j][i]);
        }
    } 
    
    	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}

		cout << endl;
	}	
    return 0;
}
