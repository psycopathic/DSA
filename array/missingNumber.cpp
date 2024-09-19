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
int missingNumber(vector<int>arr,int n){
    int m = *max_element(arr.begin(),arr.end());
    int res = m*(m+1)/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return res-sum;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
   }
   int res = missingNumber(arr,n);
   cout<<res<<endl;
    return 0;
}