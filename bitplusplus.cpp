#include<iostream>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    int x=0;
    for(int i=0;i<testcase;i++){
        string s;
        cin>>s;
        if(s[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
}