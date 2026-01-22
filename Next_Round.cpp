#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int num;
    int next=0;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        if(num>k){
            next++;
        }
    }
    cout<<next<<endl;
}