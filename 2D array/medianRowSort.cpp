// Median of a Row Wise Sorted Matrix C++

#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;

int matMed(int mat[][MAX], int r ,int c)
{
    int min = mat[0][0], max = mat[0][c-1];
    for(int i=0;i<r;i++){
        if(mat[i][0]<min)
            min = mat[i][0];      //min
        if(mat[i][c-1] > max)
            max= mat[i][c-1];      //max
    } 
    
    int pos = (r*c+1)/2;     //pos at which mid element will be present
    
    while(min<max){
        int mid = (min+max)/2;
        int midPos=0;
        for (int i = 0; i < r; ++i)
			midPos  +=  upper_bound(mat[i], mat[i]+c, mid) - mat[i];          // to fint the position of the mid]
			
		if(midPos<pos)
	       	min=mid+1;
		  
	  
	    else
	        max= mid; 
        
    }
    
    return min;        //min and max are going to be same
    // return max;
}

int main()
{
	int r = 3, c = 5;
	int m[][MAX]= { {5,10,20,30,40}, {1,2,3,4,6}, {11,13,15,17,19} };
	cout << "Median is " << matMed(m, r, c) << endl;
	return 0;
}
