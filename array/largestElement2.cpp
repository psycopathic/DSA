#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
#include<climits>
using namespace std;
int largestElement(vector<int>arr,int n){
    int largest = 0;
    int secondlargest = 0;
    if(n==1 || n==0){
        return arr[0];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
           secondlargest = largest; 
            largest = arr[i];
        }else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
        return secondlargest;
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
    cout<<"Second largest element : "<<res<<endl;
    return 0;
}