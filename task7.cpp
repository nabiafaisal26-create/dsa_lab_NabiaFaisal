#include <iostream>
#include <vector>
using namespace std;

vector<int> indices(const vector<int>& arr, int key) {
    vector<int> positions;  
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            positions.push_back(i);  
        }
    }
    return positions;  
}

int main() {


    cout << "Size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    

    cout << "Key: ";
    cin >> key;    

    vector<int> result = indices(arr, key);    

    cout << "Indices of " << key << ": ";
    if (result.empty()) {
        cout << "Not found";
    } else {
        cout << "[";
        for (size_t i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i != result.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
    }
    cout << endl;

    return 0;
}

