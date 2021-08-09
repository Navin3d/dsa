#include <iostream>
using namespace std;

int binary(int a[], int size, int key){
    int start =0;
    int  end = size-1;
    
    while(start<=end){
        int middle = (start+end)/2;
        
        if(a[middle] == key){
            return middle;
        }
        else if(a[middle] < key){
            start = middle+1;
        }
        
        else {
            end = middle-1;
        }
    }
    
    return -1;
}

int main()
{
    int a[] = {1,5,7,9,12,17,24};
    int size = sizeof(a)/sizeof(a[0]);
    int key = 5;
    cout<<binary(a,size,key);

    return 0;
}
