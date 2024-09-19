//using 3 loops.....

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
int subArraySumUpToK(vector<int>arr,int n,int k){
    int len = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum == k){
                len = max(len,j-i+1);
            }
        }
    }
    return len;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int res = subArraySumUpToK(arr,n,k);
    cout<<res<<endl;
    return 0;
}