#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    for (int i = 0; i < testcase; i++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        //checking fn is sorted or not
        bool sortedhoon=true;
        for (int i = 1; i < n; i++)
        {
            if(arr[i]>=arr[i-1]){
                continue;
            }
            else{
                sortedhoon=false;
                break;
            }
        }
        
        if(k==1 & sortedhoon ){
            cout<<"YES"<<endl;
        }
        else if(k>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    
    
}