#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for (int i = 0; i < testcase; i++)
    {
        string s;
        cin>>s;
        if (s.length()<=10){
            cout<<s<<endl;
        }
        else{
            int numberbetween=s.length()-2;
            cout<<s[0]<<numberbetween<<s[s.size()-1]<<endl;
        }
    }
}