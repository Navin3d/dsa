//K-th element of two sorted Arrays
//https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1#


class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
       int size = n+m;
       int arr[size];
       int j=0;
       for(int i=0;i<size;i++){
           if(i<n){
               arr[i] =  arr1[i];
           }
           else
           {
               arr[i] = arr2[j];
               j++;
           }
       }
       
        sort(arr, arr+size);
        return arr[k-1];
    }
    };
