#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               int dup=arr[j];
                cout<<"Duplicate element is: "<<dup<<endl;
            }
        }
    }
    return 0;
}