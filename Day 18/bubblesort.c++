#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                }
            }
        }  
}
int main(){
    int n;
    cout<<"Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}