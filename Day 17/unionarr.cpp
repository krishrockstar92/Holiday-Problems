#include<bits/stdc++.h>
using namespace std;
vector<int> unionArrays(int arr1[], int n, int arr2[], int m) {
    vector<int> result;
    set<int> s;

    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }

    for (auto it : s) {
        result.push_back(it);
    }

    return result;
}
int main() {
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter arr1 elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter arr2 elements: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> unionResult = unionArrays(arr1, n, arr2, m);
    
    cout << "Union of the two arrays is: ";
    for (auto it : unionResult) {
        cout << it << " ";
    }
    
    return 0;
}