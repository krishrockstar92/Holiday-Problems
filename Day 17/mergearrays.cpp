#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    vector<int> merged;
    cout<<"Enter the size of first array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter arr1 elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        merged.push_back(arr[i]);
    }
    cout<<"Enter the size of second array: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter arr2 elements: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        merged.push_back(arr2[i]);
    }
    cout<<"Size of merged array: "<<merged.size()<<endl;
    cout<<"Elements of merged array: ";
    for(auto it:merged){
        cout<<it<<" ";
    }
    return 0;
}