#include <iostream>
using namespace std;

void search(int a[10] , int start , int end, int key){
    int flag=0;
    for(int i=start ; i<=end ;i++){
        if(key==a[i]){
            cout<<"Found at the index "<<i;
            flag =1;
            break;
        }
    }
    
    if(flag==0)
       cout<<"Element not found";
}

int main()
{
    int a[10] ={3,5,1,8,5,6,3,98,13,-1};
    int start = 1;
    int end=5;
    int key = 0;
    search(a,start,end,key);
    return 0;
}
