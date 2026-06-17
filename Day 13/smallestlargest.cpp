#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=arr[0],largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Smallest element in array is: "<<smallest<<endl;
    cout<<"Largest element in array is: "<<largest<<endl;
}