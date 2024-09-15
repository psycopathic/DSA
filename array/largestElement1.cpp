#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
using namespace std;
int largestElement(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int res = largestElement(arr,n);
    cout<<"Largest element : "<<res<<endl;
    return 0;
}