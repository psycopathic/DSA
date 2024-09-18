//using two pointer algorithm
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
vector<int> moveZeroAtTheZeroEnd(vector<int>arr,int n){
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
           j = i;
           break;
        }
    }
    if(j==-1){
        return arr;
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
     }
     return arr;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = moveZeroAtTheZeroEnd(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}