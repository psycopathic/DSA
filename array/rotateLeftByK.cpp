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
void rotateByK(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k] = arr[i];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i] = temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotateByK(arr,n,k);
    return 0;
}