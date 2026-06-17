#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Array length: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float avg = sum/n;
    cout<<"Sum of array is: "<<sum<<endl;
    cout<<"Average of array is: "<<avg<<endl;
}