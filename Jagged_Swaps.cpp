#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        if(arr[0]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}