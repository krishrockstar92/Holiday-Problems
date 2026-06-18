#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    vector<int> duplicates;
    unordered_map<int, int> frequency;

   for(int i = 0; i < arr.size(); i++) {    // Count the frequency of each element
        frequency[arr[i]]++;
    }

    for (auto it: frequency) {    // Check for elements that appear more than once
        if (it.second > 1) {
            duplicates.push_back(it.first);
        }
    }

    return duplicates;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = findDuplicates(arr);
    if (!result.empty()) {
        cout << "The duplicate elements are: ";
       /* for (int num : result) {   //  unique approach to print duplicates
            cout << num << " ";
        }*/
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else {
        cout << "There are no duplicate elements." << endl;
    }

    return 0;
}