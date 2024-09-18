#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> unionOfTheArray(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res;
    int i = 0, j = 0;
    
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            if(res.empty() || res.back() != arr1[i]) {
                res.push_back(arr1[i]);
            }
            i++;
        } else if(arr1[i] > arr2[j]) {
            if(res.empty() || res.back() != arr2[j]) {
                res.push_back(arr2[j]);
            }
            j++;
        } else {
            if(res.empty() || res.back() != arr1[i]) {
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    
    while(i < n) {
        if(res.empty() || res.back() != arr1[i]) {
            res.push_back(arr1[i]);
        }
        i++;
    }
    
    while(j < m) {
        if(res.empty() || res.back() != arr2[j]) {
            res.push_back(arr2[j]);
        }
        j++;
    }
    
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr1(n);
    vector<int> arr2(m);
    
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    vector<int> res = unionOfTheArray(arr1, arr2);
    
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " "; 
    }
    
    return 0;
}
