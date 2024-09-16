//this is done using two pointer algorithm for its optimisation

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
int removeDuplicate(int arr[],int n){
    int i = 0;
    for(int j = 1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k = removeDuplicate(arr,n);
    cout<<"The array after removing all duplicates is : "<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}