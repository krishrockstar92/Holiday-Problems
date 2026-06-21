#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int max_freq = 0;
    int max_freq_element = arr[0];
    for(auto it:freq){
        if(it.second > max_freq){
            max_freq = it.second;
            max_freq_element = it.first;
        }
    }
    if(max_freq == 1){
        cout << "All elements are unique. No element has a frequency greater than 1." << endl;
        return 0;
    }
    else
    {    
    cout << "The element with maximum frequency is: " << max_freq_element << endl;
    cout << "Its frequency is: " << max_freq << endl;
    }
    return 0;
}