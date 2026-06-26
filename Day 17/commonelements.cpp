#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"arr1 size: ";
    cin>>n;
    int arr1[n];
    cout<<"arr1 elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"arr2 size: ";
    cin>>m;
    int arr2[m];
    cout<<"arr2 elements: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> common;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                common.push_back(arr1[i]);
            }
        }   
    }
    cout<<"Common elements are: ";
    for(int i=0;i<common.size();i++){
        cout<<common[i]<<" ";
    }
    return 0;
}