#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<cstring>
using namespace std;
int removeDuplicate(int arr[],int n)
    {
       set<int>s;
       for(int i=0;i<n;i++){
        s.insert(arr[i]);
       }
       int k = s.size();
       int j = 0;
       for(int x : s){
        arr[j++] = x;
       }
       return k;
    }

int main()
{
    int arr[] = {1,1,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr,n);

    cout<<"The array after removing all duplicates is : "<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}