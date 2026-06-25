#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    unordered_map<int, int> numMap; // To store numbers and their indices
    bool found = false;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (numMap.find(complement) != numMap.end()) {
            cout << "Pair found: (" << complement << ", " << arr[i] << ")" << endl;
            found = true;
            break;
        }
        numMap[arr[i]] = i; // Store the index of the current number
    }

    if (!found) {
        cout << "No pair found with the given sum." << endl;
    }

    return 0;
}