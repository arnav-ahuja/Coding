#include<iostream>
using namespace std;

int Fibonnaci_no(int n){
    if (n <= 1)
        return n;
    int a=0,b=1,c;
    for (int i = 1; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n;
    cout<<"Enter the term which you want in your Fibonanaci Series :->";
    cin>>n;
    cout<<endl<<"Here is your term which you filled up "<<Fibonnaci_no(n)<<endl;
}