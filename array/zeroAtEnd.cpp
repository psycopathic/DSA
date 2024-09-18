#include<iostream>
#include<vector>
using namespace std;

void moveZeroEnd(int arr[], int n) {
    vector<int> res;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            res.push_back(arr[i]);
        }
    }
    int numZeros = n - res.size(); 
    for (int i = 0; i < numZeros; i++) {
        res.push_back(0);
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    moveZeroEnd(arr, n);
    return 0;
}
