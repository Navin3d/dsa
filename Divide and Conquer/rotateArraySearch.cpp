#include <iostream>
#include <vector>
using namespace std;

int rotateArray(int a[] ,int n, int key)
{
   
    int s = 0;
    int e = n-1;
    
    while(s<=e)
    {
        int m = (s+e)/2;
        
        if(a[m] == key)   return m;
        else if ( a[s] < a[m])
        {
            if(key>=a[s] and key<=a[m]){ 
                e = m-1;
            }
            
            else{
                s = m=1;
            }
        }
        
        else{
            if(key>=a[m] and key>=a[e])
            {
                s = m+1;
            }
            
            else
            {
                e = m-1;
            }
        }
    }
    
    return -1;
}

int main()
{
    int v[] = {4,5,6,0,1,2,3};
    int key;
    cin>>key;
     int n= sizeof(v) /  sizeof(v[0]);
     
   cout<< rotateArray(v,n,key);
    return 0;
}
