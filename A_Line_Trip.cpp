#include<bits/stdc++.h>
using namespace std;

bool IsPossible(vector<int>& arr,int x,int mid){
    int min=0;
    int fuel=mid;
    for (int i = 0; i < (int)arr.size(); i++)
    {
        if (arr[i]-min<=fuel)
        {
            fuel=mid;
            min=arr[i];
        }
        else{
            return false;
        }
        
    }
    if((x-min)*2>mid){
        return false;
    }
    return true;
}

int main(){
    int testcase;
    cin>>testcase;
    for (int i = 0; i < testcase; i++)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int start=0;
        int end=2*x;
        int mid;
        int ans=-1;
        while (start<=end)
        {
            mid=start+(end-start)/2;
            if (IsPossible(arr,x,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }            
        }
        cout<<ans<<endl;
    }
}