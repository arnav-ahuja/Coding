#include<iostream>
using namespace std;

int main(){
    cout<<endl;
    int n;
    cout<<"Enter the size of your array -> ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter your array values one by one"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array elements are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } 
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count=count+arr[i];
    }
    cout<<"Sum of all numbers in arrays are "<<count<<endl;
}