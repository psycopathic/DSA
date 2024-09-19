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
int singleOccuringElement(vector<int>arr,int n){
    int res = 0;
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    return res;
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
    int res = singleOccuringElement(arr,n);
    cout<<res<<endl;
    return 0;
}