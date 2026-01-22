#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    int count=0;
    for(int i=0;i<testcase;i++){
        int one=0;
        int num;
        for(int i=0;i<3;i++){
            cin>>num;
            if(num==1){
                one++;
            }
        }
        if(one>=2) count++;
        one=0;
    }
    cout<<count;
}