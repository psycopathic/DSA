//missing number using xor operation
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
int missingNumber(vector<int>arr,int n,int m){
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<m-1;i++){
        sum1 = sum1^arr[i];//array elements
        sum2 = sum2^(i+1);//1 to m
    }
    sum2 = sum2^m;
    return sum1^sum2;
}
int main()
{
   int n,m;
   cin>>n>>m;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int res = missingNumber(arr,n,m);
   cout<<res<<endl;
    return 0;
}