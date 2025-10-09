#include<iostream>
using namespace std;

int AP_nth_Term(int n){
    int ans=3*n+7;
    return ans;

}
int main(){
    cout<<"Your AP is self created"<<endl<<"AP is 3n+7 "<<"Enter the term :-";
    int n;
    cin>>n;
    cout<<AP_nth_Term(n)<<endl;
}