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
int consecutiveOnes(vector<int>arr,int n){
    int count = 0;
    int maxCount = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;

        }else{
            count = 0;
        }
      maxCount = max(maxCount,count);
    }
    return maxCount;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = consecutiveOnes(arr,n);
    cout<<res<<endl;
    return 0;
}