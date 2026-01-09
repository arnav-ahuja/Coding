#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for (int i = 0; i < testcase; i++)
    {
        string n;
        string s;
        cin>>n;
        int khaali=0;
        cin>>s;
        bool swap=true;

        for (int j = 0; j < s.size(); j++)
        {
            if(s[j]=='.'){
                khaali++;
                if(j<s.size()-2){
                    if(s[j+1]=='.' && s[j+2]=='.'){
                       cout<<"2"<<endl;
                       swap=false;
                       break; 
                    }
                }
            }
        }
        if(swap){
            cout<<khaali<<endl;
        }
        
    }
}

