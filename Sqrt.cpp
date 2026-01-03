#include<iostream>
using namespace std;

int Sqrt(int x){
    if (x==0 || x==1)
    {
        return x;
    }
    int start=0;
    int end=x;
    long long mid;
    int ans;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (mid*mid==x)
        {
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

double doubleint(int sq,int num){
    int start=sq*100;
    int end=(sq+1)*100;
    long long mid;
    double ans;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (mid*mid==num*10000)
        {
            return mid;
        }
        else if(mid*mid<num*10000){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans/100.0;
}
int main(){
    int number;
    cout<<"Enter the number :-";
    cin>>number;
    int sqrt=Sqrt(number);
    cout<<"No is:-";
    cout<<doubleint(sqrt,number);
}