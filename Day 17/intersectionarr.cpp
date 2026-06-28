#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionArrays(int arr1[], int n, int arr2[], int m) {
    vector<int> result;
    int i=0, j=0;
    while(i<n && j<m) {
        if(arr1[i] < arr2[j]) {
            i++;
        } else if(arr1[i] > arr2[j]) {
            j++;
        } else {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
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

    vector<int> intersectionResult = intersectionArrays(arr1, n, arr2, m);
    
    cout << "Intersection of the two arrays is: ";
    for (auto it : intersectionResult) {
        cout << it << " ";
    }
    
    return 0;
}