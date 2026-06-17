#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the length of array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements of array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}