 #include<bits/stdc++.h>
using namespace std;

int FindPaths(int i, int j, int m, int n)
{

//base case
	if(i==m-1 and j==n-1)
		return 1;

   if(i>=m or j>=n)
   	   return 0;
   	
	int ans = FindPaths(i+1, j ,m,n) + FindPaths(i,j+1, m,n);
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE		
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


  int m , n;
  cin>>m>>n;
  cout<<FindPaths(0,0, m,n);
    
}