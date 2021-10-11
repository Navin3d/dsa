#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n ; i++){
        bool isSwap = false;
        for(int j=1 ; j<(n-i) ; j++){
                 if(arr[j] < arr[j-1]){
                    swap(arr[j] , arr[j-1]);
                    isSwap = true; }
        }

        if(isSwap == false)
        break;
    }
}

int main(){
    int arr[] = {2,3,1,4,97,8};
    int n = sizeof(arr)/sizeof(arr[0]);       // 24/4 = 6
    bubbleSort(arr, n);
    for(int i=0;i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
